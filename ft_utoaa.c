/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoaa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 20:03:07 by raphox            #+#    #+#             */
/*   Updated: 2023/12/12 15:55:55 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_strlen_all(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static size_t	ft_get_that_size(unsigned int n)
{
	size_t	size;

	if (n == 0)
		return (1);
	size = 0;
	while (n != 0)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

int	ft_utoaa(unsigned int nb, char *base)
{
	if (nb >= ft_strlen_all(base))
	{
		ft_putnbr_base(nb / ft_strlen_all(base), base);
	}
	ft_putchar(base[nb % ft_strlen_all(base)]);
	return (ft_get_that_size(nb));
}