

#include "ft_lib.h"
#include<unistd.h>


unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static size_t	ft_get_size(unsigned int n)
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

int	ft_putnbr_base(unsigned int nb, char *base)
{
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