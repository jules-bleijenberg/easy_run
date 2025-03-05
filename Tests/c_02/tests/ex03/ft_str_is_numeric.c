#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	printf("0=%d\n", ft_str_is_numeric("0"));
	printf("9=%d\n", ft_str_is_numeric("9"));
	printf(" =%d\n", ft_str_is_numeric(" "));
	printf("A=%d\n", ft_str_is_numeric("A"));
	printf("=%d\n", ft_str_is_numeric(""));
}
