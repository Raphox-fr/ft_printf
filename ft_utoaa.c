/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoaa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphox <raphox@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 20:03:07 by raphox            #+#    #+#             */
/*   Updated: 2023/12/11 19:42:14 by raphox           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"
#include <unistd.h>

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