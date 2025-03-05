#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char test1[] = "ABCD";
	char test2[] = "ef";
	char test3[] = "ABCD";
	char test4[] = "EF";
	char test5[] = "ABCD";
	char test6[] = "";
	char test7[] = "ABCD";
	char test8[] = "EF";
	char test9[] = "FE";

	printf("%d - %s\n", ft_strlcat(test1, test2, 1), test1);
	printf("%d - %s\n", ft_strlcat(test3, test4, 6), test3);
	printf("%d - %s\n", ft_strlcat(test5, test6, 9), test5);
	printf("%d - %s\n", ft_strlcat(test7, test8, 4), test7);
	printf("%d - %s\n", ft_strlcat(test9, test8, 5), test9);
}
