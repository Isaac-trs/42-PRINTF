/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istripol <istripol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 05:15:52 by istripol          #+#    #+#             */
/*   Updated: 2024/04/25 02:09:26 by istripol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	hex_len(unsigned int n)
{
	int	cpt;
	unsigned int m;

	cpt = 0;
	m = n;
	while (m > 0)
	{
		cpt++;
		m /= 16;
	}
	return (cpt);
} 

int	print_hex(unsigned int n, char type)
{
	unsigned int	x;
	const char *base = HEX;
	
	x = n;
	if (x < 16)
	{	
		if (type == 'X')	
			ft_putchar_fd(ft_toupper(base[x % 16]), 1);
		else
			ft_putchar_fd(base[x % 16], 1);
	}
	else
	{
		print_hex(x / 16, type);
		print_hex(x % 16, type);
	}
	return (hex_len(n));
}
