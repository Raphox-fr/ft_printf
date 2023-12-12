/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:12:29 by rafaria           #+#    #+#             */
/*   Updated: 2023/12/12 17:19:42 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdarg.h>
# include<stddef.h>
# include<stdio.h>
# include<stdlib.h>
# include<string.h>
# include<strings.h>
# include<unistd.h>
# include <stdint.h>

int	ft_printf(const char *str, ...);
int ft_get_size_ptr(void *ptr);
int	ft_putchar(char c);
int	ft_putnbr_base(unsigned int nb, char *base);
void	write_adress(unsigned long long ptr);
int	ft_utoaa(unsigned int nb, char *base);
int	ft_putstr(char *str);
int	ft_itoa(int n);
int ft_ptr_adress(void *ptr);

#endif