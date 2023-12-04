/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:54:24 by rafaria           #+#    #+#             */
/*   Updated: 2023/12/04 18:52:39 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_lib.h"
#include <unistd.h>


int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	i = 0;
	j = 0;
	while (base[j])
	{
		i = j + 1;
		while (base[j] != base[i] && base[i] != '\0')
			i++;
		if (base[j] == base[i])
			return (0);
		j++;
	}
	return (1);
}

void	ft_putnbr_base(int nb, char *base)
{
	if (check_base(base) == 0)
		return ;
	if (base[0] == '\0' || ft_strlen(base) == 1 || ft_strlen(base) == 0)
		return ;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= ft_strlen(base))
	{
		ft_putnbr_base(nb / ft_strlen(base), base);
	}
	ft_putchar(base[nb % ft_strlen(base)]);
}

int	main(void)
{
	ft_putnbr_base(42, "0123456789");
}