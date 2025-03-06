#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	val_1[] = "Hello";
	char	val_2[] = "AZaz";
	char	val_3[] = "";
	char	inv_1[] = "Hello world";
	char	inv_2[] = "[[";
	printf("1 = %d\n", ft_str_is_alpha(val_1));
	printf("1 = %d\n", ft_str_is_alpha(val_2));
	printf("1 = %d\n", ft_str_is_alpha(val_3));
	printf("0 = %d\n", ft_str_is_alpha(inv_1));
	printf("0 = %d\n", ft_str_is_alpha(inv_2));
}
