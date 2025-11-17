/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:06:27 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/11/17 21:21:41 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_PRINTF_H
# define MY_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int		my_printf(const char *format, ...);
size_t	my_strlen(const char *str);
int		my_putnum(int num);
#endif
