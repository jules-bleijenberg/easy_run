#include <stdio.h>

int ft_str_is_lowercase(char *str);

int main(void)
{
	char test1[] = "";
	char test2[] = "abcxyz";
	char test3[] = "abC";
	char test4[] = " ";

	printf("%d\n", ft_str_is_lowercase(test1));
	printf("%d\n", ft_str_is_lowercase(test2));
	printf("%d\n", ft_str_is_lowercase(test3));
	printf("%d\n", ft_str_is_lowercase(test4));
}
