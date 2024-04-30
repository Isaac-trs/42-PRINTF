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
#include <stdio.h>

int	ft_print_base(unsigned long n, int base, unsigned upper)
{
	static int	cpt;

	cpt = 0;
	if (n >= (unsigned)base)
		ft_print_base(n / base, base, upper);

	cpt += ft_putchar_fd(HEX[n % base + (upper * base)], 1);
	return (cpt);
}