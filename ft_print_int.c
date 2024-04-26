/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istripol <istripol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 01:30:32 by istripol          #+#    #+#             */
/*   Updated: 2024/04/26 18:22:15 by istripol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(int n)
{
	long	nb;
	int		cpt;

	cpt = 1;
	nb = n;
	if (n < 0)
	{
		nb = -nb;
		cpt++;
	}
	while (nb > 9)
	{
		nb /= 10;
		cpt++;
	}
	ft_putnbr_fd(n, 1);
	return (cpt);
}
