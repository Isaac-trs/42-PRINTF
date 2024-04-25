/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istripol <istripol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 00:20:35 by istripol          #+#    #+#             */
/*   Updated: 2024/04/25 01:16:51 by istripol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	ui_len(unsigned int n)
{
	int	cpt;

	cpt = 0;
	while (n > 9)
	{
		n /= 10;
		cpt++;
	}
	return (cpt);
}

int	print_unsigned(unsigned int n)
{
	int	cpt;

	cpt = ui_len(n);
	if (n == MAX_UINT)
	{
		ft_putstr_fd("4294967295", 1);
		return (10);
	}
	if (n > 9)
	{
		cpt++;
		print_unsigned(n / 10);
	}
	ft_putchar_fd(n % 10 + '0', 1);
	return (cpt);
}
