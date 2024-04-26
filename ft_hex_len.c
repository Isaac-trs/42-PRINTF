/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istripol <istripol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:17:41 by istripol          #+#    #+#             */
/*   Updated: 2024/04/26 18:30:34 by istripol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_len(unsigned long n)
{
	int				cpt;
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
