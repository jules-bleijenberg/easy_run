#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);

int	main(void)
{
	char test1[] = "Hello";
	char test2[] = "";
	printf("%lu\n", strlen(test1));
	printf("%d\n", ft_strlen(test1));
	printf("%lu\n", strlen(test2));
	printf("%d\n", ft_strlen(test2));
}
