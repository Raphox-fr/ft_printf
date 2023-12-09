/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphox <raphox@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:16:48 by rafaria           #+#    #+#             */
/*   Updated: 2023/12/08 18:18:25 by raphox           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"
#include<stdarg.h>

int	ft_print(int type, va_list arg)
{
    if (type == 'c')
        return (ft_putchar((va_arg(arg, int))));
    else if (type == 's')
        return (ft_putstr((va_arg(arg, char *))));
    else if (type == 'p')
        return (ft_putnbr_base((va_arg(arg, int)), "0"));
    else if (type == 'i' || type == 'd')
        return (ft_itoa((va_arg(arg, int))));
    // else if (type == 'u')
    //     return (ft_unsigned_itoa((va_arg(arg, int))));
    else if (type == 'x')
        return (ft_putnbr_base((va_arg(arg, int)), "0123456789abcdef"));
    else if (type == 'X')
        return (ft_putnbr_base((va_arg(arg, int)), "0123456789ABCDEF"));
    else if (type == '%')
        return(ft_putchar(va_arg(arg, int)));
    return(0);
}

// good :
// c good
// s  good
// p no good afficher l adresse
// i
// u
// x
// X
// %

//  i and d = Signed decimal integer itoa
//  u = Unsigned decimal integer itoa modifier, sans signe negatif


int	ft_printf(const char *str, ...)
{
	int		bee;
    int total;
    total = 0;
    bee = 0;
	va_list	arg;

	va_start(arg, str);
	while (str[bee])
    {
        if (str[bee] == '%')
        {
            total = ft_print(str[bee + 1], arg);
            bee++;
        }
        else
            total = total + write(1, &str[bee], 1);
        bee++;
    }
    return total;
}


// c good
// s  good
// p no good afficher l adresse
// i good
// u pas fait
// x
// X
// %

int main(void)
{
    int i;
    i = 42;
    
    printf("%d\n", ft_printf("%x\n", -5));
    printf("\n\n\n");
    printf("%d\n", printf("%x\n", -5));

}