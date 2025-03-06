#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	printf("1=%d\n", ft_str_is_numeric("0"));
	printf("1=%d\n", ft_str_is_numeric("9"));
	printf("1=%d\n", ft_str_is_numeric(""));
	printf("0=%d\n", ft_str_is_numeric(" "));
	printf("0=%d\n", ft_str_is_numeric("A"));
}
