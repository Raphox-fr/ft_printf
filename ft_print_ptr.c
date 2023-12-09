/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphox <raphox@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:41:34 by raphox            #+#    #+#             */
/*   Updated: 2023/12/08 17:07:40 by raphox           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int ft_get_size_ptr(void *ptr)
{
    uintptr_t fulladress = (uintptr_t)ptr;
    int size;
    size = 3;
    
    while (fulladress != 0)
    {
        size++;
        fulladress = fulladress / 16;
    }
    return (size);
}

int ft_print_adress(unsigned long long ptr)
{
    int i;
    i = 0;
    int size;
    size = ft_get_size_ptr(ptr);
    while (i <= size)
    {
        write(1, &ptr, 1);
        ptr++;
        i++;
    }
    
    
}
int main()
{
    unsigned long long q;
    printf("%d\n", ft_get_size_ptr(&q));
    printf("%d\n", printf("%p\n", &q));
    
}

