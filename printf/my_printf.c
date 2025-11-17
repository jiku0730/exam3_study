/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:07:44 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/11/17 21:38:00 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_printf.h"

static int	hundle_args(const char *format, int i, va_list *args)
{
	if (format[i] == 'd' || format[i] == 'i')
	{
		int num = va_arg(*args, int);
		return (my_putnum(num));
	}
	else if (format[i] == 'c')
	{
		char c = va_arg(*args, int);
		write(STDOUT_FILENO, &c, 1);
		return (1);
	}
	else if (format[i] == 's')
	{
		const char *str = va_arg(*args, char *);
		write(STDOUT_FILENO, str, my_strlen(str));
		return ((int)my_strlen(str));
	}
}

int	my_printf(const char *format, ...)
{
	int		rtv;
	int		i;
	va_list	args;
	int		tmp;

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
		else if (format[i] == '%')
		{
			i++;
			tmp = hundle_args(format, i, &args);
			rtv += tmp;
			i++;
			continue;
		}
	}
	va_end(args);
	return (rtv);
}
