#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char test1[100] = "ABCD";
	char test2[] = "EF";
	char test3[100] = "ABCD";
	char test4[] = "EF";
	printf("%s\n", ft_strcat(test1, test2));
	printf("%s\n", strcat(test3, test4));
}
