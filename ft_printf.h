/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istripol <istripol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 17:16:14 by istripol          #+#    #+#             */
/*   Updated: 2024/04/26 18:32:18 by istripol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "./libft/libft.h"

# ifndef MIN_INT
#  define MIN_INT -2147483648
# endif

# ifndef MAX_UINT
#  define MAX_UINT 4294967295 
# endif

# ifndef HEX
#  define HEX "0123456789abcdef"
# endif

int		ft_printf(const char *string, ...);
int		ft_print_char(char c);
int		ft_print_string(char *str);
int		ft_print_int(int n);
int		ft_print_hex(unsigned long n, char type);
int		ft_print_unsigned(unsigned int n);
int		ft_print_ptr(unsigned long ptr);
int		ft_hex_len(unsigned long n);

#endif
