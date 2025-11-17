/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:04:34 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/11/17 21:32:49 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "my_printf.h"

int	main(int argc, char const **argv)
{
	my_printf("Hello World!\n");
	printf("my_putnum rtv = %d\n", my_putnum(42));
	my_printf("num = %d\n", 42);
	my_printf("c = %c\n", 'c');
	my_printf("s = %s\n", "this is parcentage s's strings");
	return (0);
}
