#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);

int	main(void)
{
	char test1[] = "Hello";
	char test2[] = "";
	printf("%lu = %d\n", strlen(test1), ft_strlen(test1));
	printf("%lu = %d\n", strlen(test2), ft_strlen(test2));
}
