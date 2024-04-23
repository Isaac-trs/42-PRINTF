/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istripol <istripol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 08:22:12 by istripol          #+#    #+#             */
/*   Updated: 2024/04/23 08:23:16 by istripol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MIN_INT
# define MIN_INT -2147483648
#endif

#ifndef PRINTF_H
# define PRINTF_H
# include "./Libft/libft.h"
# include <stdarg.h>


int		ft_printf(const char *string, ...);
int		print_char(char c);
int		print_string(char *str);
int		print_int(int n);
#endif
