/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istripol <istripol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 18:34:22 by istripol          #+#    #+#             */
/*   Updated: 2024/04/26 18:24:42 by istripol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

static int	flags_processor(const char *string, va_list ap)
{
	int	cpt;

	cpt = 0;
	if (*string == '%')
		cpt += ft_print_char(*string);
	else if (*string == 'c')
		cpt += ft_print_char(va_arg(ap, int));
	else if (*string == 's')
		cpt += ft_print_string(va_arg(ap, char *));
	else if (*string == 'u')
		cpt += ft_print_unsigned(va_arg(ap, unsigned int));
	else if (*string == 'd' || *string == 'i')
		cpt += ft_print_int(va_arg(ap, int));
	else if (*string == 'p' || *string == 'x' || *string == 'X')
	{
		if (*string == 'p')
			cpt += ft_print_ptr((unsigned long)va_arg(ap, void *));
		else
			cpt += ft_print_hex(va_arg(ap, unsigned int), *string);
	}
	return (cpt);
}

int	ft_printf(const char *string, ...)
{
	va_list		ap;
	int			cpt;

	if (!string)
		return (0);
	cpt = 0;
	va_start(ap, string);
	while (*string)
	{
		if (*string == '%')
		{
			string++;
			if (ft_strchr("%scpiduxX", *string))
				cpt += flags_processor(string, ap);
		}
		else
			cpt += ft_print_char(*string);
		string++;
	}
	va_end(ap);
	return (cpt);
}
