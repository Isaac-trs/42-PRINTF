/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istripol <istripol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:34:28 by istripol          #+#    #+#             */
/*   Updated: 2024/04/26 18:19:19 by istripol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(char *str)
{
	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	return (ft_putstr_fd(str, 1));
}
