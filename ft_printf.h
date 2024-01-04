/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphox <raphox@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:12:29 by rafaria           #+#    #+#             */
/*   Updated: 2024/01/04 16:24:41 by raphox           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <strings.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_get_size_ptr(void *ptr);
int		ft_putchar(char c);
int		ft_putnbr_base(unsigned int nb, char *base);
void	write_adress(unsigned long long ptr);
int		ft_putstr(char *str);
int		ft_itoa(int n);
int		ft_ptr_adress(void *ptr);

#endif