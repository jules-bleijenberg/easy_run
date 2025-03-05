#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char test1[] = "Hello world";
	char test2[] = "Hello world";
	char test3[] = "ABC";
	char test4[] = "ABZ";
	char test5[] = "Hello ";
	char test6[] = "Hello world";
	printf("%d-%d\n", ft_strncmp(test1, test2, 10), strncmp(test1, test2, 10));
	printf("%d-%d\n", ft_strncmp(test3, test4, 3), strncmp(test3, test4, 3));
	printf("%d-%d\n", ft_strncmp(test3, test4, 2), strncmp(test3, test4, 2));
	printf("%d-%d\n", ft_strncmp(test5, test6, 100), strncmp(test5, test6, 100));
}
