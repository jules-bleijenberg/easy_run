#include <stdio.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char str[] = "Hello World";
	printf("%s = %s", str, ft_strdup(str));
}
