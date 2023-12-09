

#include "ft_lib.h"
#include<unistd.h>


int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_get_size(int n)
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

int	ft_putnbr_base(int nb, char *base)
{
	if (nb < 0)
		nb = -nb;
	if (nb >= ft_strlen(base))
	{
		ft_putnbr_base(nb / ft_strlen(base), base);
	}
	ft_putchar(base[nb % ft_strlen(base)]);
	return (ft_get_size(nb));
}

// int	main(void)
// {
// 	printf("%u\n", 12);
// }