#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char test1[] = "Hello World";
	char test2[] = "";
	char test3[] = "Hello\n World";
	printf("%d\n", ft_str_is_printable(test1));
	printf("%d\n", ft_str_is_printable(test2));
	printf("%d\n", ft_str_is_printable(test3));
}
