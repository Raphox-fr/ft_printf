/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_lib.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:12:29 by rafaria           #+#    #+#             */
/*   Updated: 2023/12/04 18:26:09 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_LIB_H
# define FT_PRINTF_LIB_H

# include<stdarg.h>
# include<stddef.h>
# include<stdio.h>
# include<stdlib.h>
# include<string.h>
# include<strings.h>
# include<unistd.h>

int	ft_putchar(char c);
void	ft_putnbr_base(int nb, char *base);
int	ft_putstr(char *str);


#endif