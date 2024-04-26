/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istripol <istripol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:38:30 by istripol          #+#    #+#             */
/*   Updated: 2024/04/26 18:27:43 by istripol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(unsigned long ptr)
{
	int	cpt;

	cpt = ft_hex_len(ptr);
	if (!ptr)
		return (cpt = write(1, "(nil)", 5));
	cpt += (int)write(1, "0x", 2);
	ft_print_hex(ptr, 'x');
	return (cpt);
}
