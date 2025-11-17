/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:07:44 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/11/17 21:24:45 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_printf.h"

size_t		my_strlen(const char *str)
{
	size_t	i;

	while (str[i])
		i++;
	return (i);
}

int	my_putnum(int num)
{
	int	rtv;

	rtv = 0;
	if (num == -2147483648)
	{
		rtv = write(STDOUT_FILENO, "-2147483648", 12);
		return (rtv);
	}
	if (num < 0)
	{
		num *= -1;
		rtv += write(STDOUT_FILENO, "-", 1);
	}
	if (num > 9)
		rtv += my_putnum(num / 10);
	rtv += write(STDOUT_FILENO, &"0123456789"[num % 10], 1);
	return (rtv);
}
