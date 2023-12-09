/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphox <raphox@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:12:29 by rafaria           #+#    #+#             */
/*   Updated: 2023/12/08 16:38:35 by raphox           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIB_H
# define FT_LIB_H

# include<stdarg.h>
# include<stddef.h>
# include<stdio.h>
# include<stdlib.h>
# include<string.h>
# include<strings.h>
# include<unistd.h>
# include <stdint.h>

int ft_get_size_ptr(void *ptr);
int	ft_putchar(char c);
int	ft_putnbr_base(int nb, char *base);
int	ft_putstr(char *str);
int	ft_itoa(int n);
int	ft_unsigned_itoa(int n);

#endif