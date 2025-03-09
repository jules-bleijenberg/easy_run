#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	printf("-1243 = %d\n", ft_atoi("  \n\t ---++--+1243ab567"));
	printf("1243 = %d", ft_atoi("  \n\t --++--+1243ab567"));
}
