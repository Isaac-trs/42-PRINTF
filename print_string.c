/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istripol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:34:28 by istripol          #+#    #+#             */
/*   Updated: 2024/04/22 23:50:44 by istripol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	print_string(char *str)
{
	int cpt;
	
	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		return (6);	
	}
	cpt = (int)ft_strlen(str);
	ft_putstr_fd(str, 1);
	return (cpt);
}
