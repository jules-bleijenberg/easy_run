#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char test1[] = "ABCD";
	char test2[] = "BC";
	char test3[] = "ABCD";
	char test4[] = "EF";
	char test5[] = "D";
	char test6[] = "ABCD";

	printf("%s\n", strstr(test1, test2));

	printf("%s\n", strstr(test1, test2));
	printf("%s\n", ft_strstr(test1, test2));
	printf("\n%s\n", strstr(test3, test4));
	printf("%s\n", ft_strstr(test3, test4));
	printf("\n%s\n", strstr(test3, test5));
	printf("%s\n", ft_strstr(test3, test5));
	printf("\n%s\n", strstr(test3, test6));
	printf("%s\n", ft_strstr(test3, test6));
}
