/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_itoa.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 20:03:07 by raphox            #+#    #+#             */
/*   Updated: 2023/12/05 18:52:01 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_lib.h"

static int	ft_get_size(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

int	ft_fill2(int size, int locate, int n, char *res)
{ 
	while (size > locate)
	{
		res[size - 1] = n % 10 + '0';
		n = n / 10;
		size--;
	}
}

int	ft_unsigned_itoa(int n)
{
	int nb;
	int		locate;
	int		size;
	char	*res;

	nb = (unsigned int)n;
	locate = 0;
	size = ft_get_size(nb);
	res = malloc((sizeof(char) * size + 1));
	if (res == NULL)
		return (0);
	
	ft_fill2(size, locate, nb, res);
	res[size] = '\0';
	ft_putstr(res);
	return (size);
}

// int main()
// {
// 	int n;
// 	n = -2147483648;
// 	printf("%d", ft_unsigned_itoa(n));
// }