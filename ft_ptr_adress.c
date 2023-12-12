/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr_adress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:41:34 by raphox            #+#    #+#             */
/*   Updated: 2023/12/12 15:56:13 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	get_size(unsigned long long n)
{
	size_t	size;

	size = 0;
	while (n != 0)
	{
		size++;
		n = n / 16;
	}
	return (size);
}

void	write_adress(unsigned long long ptr)
{
	static char	base[] = "0123456789abcdef";

	if (ptr >= 16)
		write_adress(ptr / 16);
	write(1, &base[ptr % 16], 1);
}

int	ft_ptr_adress(void *ptr)
{
	if (ptr == NULL)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	write_adress((unsigned long long)ptr);
	return (get_size((unsigned long long)ptr) + 2);
}

// int main()
// {
// 	unsigned long long	q;

// 	q = 1444;
// 	printf("%d\n", ft_ptr_adress(&q));
// 	printf("%d\n", printf("%p\n", &q));
// }
