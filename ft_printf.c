/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:16:48 by rafaria           #+#    #+#             */
/*   Updated: 2023/12/15 15:43:56 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_print(int type, va_list arg)
{
	if (type == 'c')
		return (ft_putchar((va_arg(arg, int))));
	else if (type == 's')
		return (ft_putstr((va_arg(arg, char *))));
	else if (type == 'p')
		return (ft_ptr_adress((va_arg(arg, void *))));
	else if (type == 'i' || type == 'd')
		return (ft_itoa((va_arg(arg, int))));
	else if (type == 'u')
		return (ft_utoaa((va_arg(arg, unsigned int)), "0123456789"));
	else if (type == 'x')
		return (ft_putnbr_base((va_arg(arg, unsigned int)),
				"0123456789abcdef"));
	else if (type == 'X')
		return (ft_putnbr_base((va_arg(arg, unsigned int)),
				"0123456789ABCDEF"));
	else if (type == '%')
		return (ft_putchar('%'));
	else
		return (0);
}

int	ft_printf(const char *str, ...)
{
	int		bee;
	int		total;
	va_list	arg;

	total = 0;
	bee = 0;
	va_start(arg, str);
	while (str[bee])
	{
		if (str[bee] == '%')
		{
			total = total + ft_print(str[bee + 1], arg);
			bee++;
		}
		else
			total = total + write(1, &str[bee], 1);
		bee++;
	}
	va_end(arg);
	return (total);
}

// c good

// s good 10 pas bon la diff :
// NULL  NULL10
// NULL (null) NULL16

// p good 
// d good
// i good
// u good
// x good
// X good
// % good
// -g dans mes flag pour numero d ligne
// gcc nom du fichier -> valgrind ./a.out -> leak check=full


// int	main(void)
// {
// 	printf("%d", ft_printf(" NULL %s NULL ", NULL));

// 	printf("\n");

// 	printf("%d", printf(" NULL %s NULL ", NULL));
// }

