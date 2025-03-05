#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char test1[] = "Hello world";
	char test2[] = "Hello world";
	char test3[] = "ABC";
	char test4[] = "ABD";
	char test5[] = "ABC";
	char test6[] = "AB";
	char test7[] = "AB ";
	char test8[] = "ABC";

	printf("%d, %d\n", strcmp(test1, test2), ft_strcmp(test1, test2));
	printf("%d, %d\n", strcmp(test3, test4), ft_strcmp(test3, test4));
	printf("%d, %d\n", strcmp(test5, test6), ft_strcmp(test5, test6));
	printf("%d, %d\n", strcmp(test7, test8), ft_strcmp(test7, test8));
}
