/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istripol <istripol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 18:34:22 by istripol          #+#    #+#             */
/*   Updated: 2024/04/23 04:28:59 by istripol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h" 

int	flag_processor(const char *string, va_list args)
{
	int	cpt;

	cpt = 0;
	if (*string == 'c')
		cpt += print_char(va_arg(args, int));
	else if (*string == 's')
		cpt += print_string(va_arg(args, char *));
//	else if (*string == 'p')
//		cpt +=
	else if (*string == 'i')
		cpt += print_int(va_arg(args, int));
	else if (*string == 'd')
		cpt += print_int(va_arg(args, int));
//	else if (*string == 'u')
//		cpt +=
//	else if (*string == 'x')
//		cpt +=
//	else if (*string == 'X')
//		cpt +=
	return (cpt);
}

int	ft_printf(const char *string, ...)
{
	va_list		args;
	int			cpt;

	cpt = 0;
	va_start(args, string);
	while (*string)
	{
		if (*string == '%')
		{
			string++;
			if (*string == '%')
				cpt += print_char('%');
			else if (ft_strchr("cspiduxX", *string))
				cpt += flag_processor(string, args);
		}
		else
			cpt = cpt + print_char(*string);
		string++;
	}
	va_end(args);
	return (cpt);
}
