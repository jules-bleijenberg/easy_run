#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	printf("%d\n", ft_find_next_prime(-3));
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(1));
	printf("%d\n", ft_find_next_prime(8));
	printf("%d\n", ft_find_next_prime(19));
	printf("%d\n", ft_find_next_prime(21));
}
