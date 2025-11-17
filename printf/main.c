/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:04:34 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/11/17 14:43:12 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "my_printf.h"

int	main(int argc, char const **argv)
{
	my_printf("Hello World!\n");
	printf("%ld\n", my_strlen("1234567890"));
	int num = 42;
	my_printf("num = %d\n", num);
	return (0);
}
