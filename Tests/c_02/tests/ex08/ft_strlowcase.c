#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char test[] = "@ABCXYZ[]";
	printf("%s\n", test);
	printf("%s\n", ft_strlowcase(test));
}
