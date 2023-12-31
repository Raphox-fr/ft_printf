/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphox <raphox@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 20:03:07 by raphox            #+#    #+#             */
/*   Updated: 2024/01/04 16:04:44 by raphox           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

void	ft_fill_res(int size, int locate, int n, char *res)
{
	res[size] = '\0';
	while (size > locate)
	{
		res[size - 1] = n % 10 + '0';
		n = n / 10;
		size--;
	}
	ft_putstr(res);
}

int	ft_itoa(int n)
{
	int		locate;
	int		size;
	char	*res;

	locate = 0;
	size = ft_get_size(n);
	res = malloc((sizeof(char) * size + 1));
	if (res == NULL)
		return (0);
	if (n == -2147483648)
	{
		res[0] = '-';
		res[1] = '2';
		n = 147483648;
		locate = 2;
	}
	if (n < 0)
	{
		res[0] = '-';
		locate = 1;
		n = -n;
	}
	ft_fill_res(size, locate, n, res);
	free(res);
	return (size);
}

// int main()
// {
// 	int n;
// 	n = -2147483648;
// 	printf("%d", ft_itoa(n));
// }