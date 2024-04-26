/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istripol <istripol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 05:15:52 by istripol          #+#    #+#             */
/*   Updated: 2024/04/26 18:26:28 by istripol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned long n, char type)
{
	const char		*base = HEX;
	int				cpt;
	unsigned long	x;

	cpt = 0;
	if (!n)
		return (write(1, "0", 1));
	cpt = ft_hex_len(n);
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
		ft_print_hex(x / 16, type);
		ft_print_hex(x % 16, type);
	}
	return (cpt);
}
