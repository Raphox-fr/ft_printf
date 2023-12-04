/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:16:48 by rafaria           #+#    #+#             */
/*   Updated: 2023/12/04 18:54:33 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_lib.h"
# include<stdarg.h>

int	ft_print(int type, va_list arg)
{
   int b;
   b = 0;
    if (type == 'c')
        b = b + ft_putchar((va_arg(arg, int)));
    else if (type == 's')
        b = b + ft_putstr((va_arg(arg, char *)));
    else if (type == 'p')
        ft_putnbr_base((va_arg(arg, char *)), "0123456789abcdef");
    else if (type == 'd')
        ft_putnbr_base((va_arg(arg, char *)), "0123456789");
    // else if (type == 'i')
    //     return();
    // else if (type == 'u')
    //     return();
    else if (type == 'x')
        ft_putnbr_base((va_arg(arg, char *)), "0123456789abcdef");
    else if (type == 'X')
        ft_putnbr_base((va_arg(arg, char *)), "0123456789abcdef");
    // else if (type == '%')
    //     return();
    return(b);
    
}

//  x = Unsigned hexadecimal integer
//  i = Signed decimal integer itoa
//  u = Unsigned decimal integer itoa modifier, sans signe negatif
//  X = Unsigned hexadecimal integer (capital letters)
 

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
            total = total + ft_print(str[bee + 1], arg);
            bee = bee + 2;
            
        }
        else
            total = total + write(1, &str[bee], 1);
        bee++;
    }
    return total;
}
int main(void)
{
    char bee[] = "blyat fjbweb jw ltb";
    printf("\n\n%d\n\n", ft_printf("%s", bee));
}
