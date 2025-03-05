#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char test1[] = "ABCXYZ";
	char test2[] = "";
	char test3[] = "aBfew";

	printf("%d\n", ft_str_is_uppercase(test1));
	printf("%d\n", ft_str_is_uppercase(test2));
	printf("%d\n", ft_str_is_uppercase(test3));
}
