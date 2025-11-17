/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:07:44 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/11/17 14:23:23 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_printf.h"

int	my_printf(const char *format, ...)
{
	int	rtv;
	int	i;
	va_list args;

	if (!format)
	{
		return (-1);
	}
	va_start(args, format);
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			write(STDOUT_FILENO, &format[i], 1);
			rtv++;
			i++;
			continue ;
		}
	}
	return (rtv);
}
