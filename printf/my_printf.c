/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:07:44 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/11/17 14:45:53 by kjikuhar         ###   ########.fr       */
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
	
	write(STDOUT_FILENO, )
}

static int	hundle_args(const char *format, int i, va_list *args)
{
	i++;
	if (format[i] == 'd' || format[i] == 'i')
	{
		int num = va_arg(*args, int);
		char *num_str = my_itoa(num);
		write(STDOUT_FILENO, num_str, my_strlen(num_str));
		return (my_strlen(num_str));
	}
	// else if (format[i] == 'c')
	// {
	// 	char c = va_arg(*args, char);
	// 	write(STDOUT_FILENO, &c, 1);
	// 	return (1);
	// }
	// else if (format[i] == 's')
	// {
	// 	const char *str = va_arg(*args, char *);
	// 	write(STDOUT_FILENO, str, my_strlen(str));
	// 	return (my_strlen(str));
	// }
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
			tmp = hundle_args(format, i, &args);
			rtv += tmp;
			i += tmp;
			continue;
		}
	}
	va_end(args);
	return (rtv);
}
