#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	printf("%d\n", ft_recursive_power(10, -3));
	printf("%d\n", ft_recursive_power(0, 3));
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(2, 2));
	printf("%d\n", ft_recursive_power(-10, 2));
	printf("%d\n", ft_recursive_power(10, 5));
}
