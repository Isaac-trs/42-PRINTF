/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istripol <istripol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:38:30 by istripol          #+#    #+#             */
/*   Updated: 2024/04/26 00:49:14 by istripol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	hex_len(unsigned long n)
{
	int	cpt;
	unsigned long	m;

	cpt = 0;
	m = n;
	while (m > 0)
	{
		cpt++;
		m /= 16;
	}
	return (cpt);
} 

int	print_ptr(unsigned long ptr)
{
	int	cpt;

	cpt = hex_len(ptr);
	if (!ptr)
		return (cpt = write(1, "(nil)", 5));
	cpt += (int)write(1, "0x", 2);
	print_hex(ptr, 'x');
	
	return (cpt);
}
