#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	int	a = ft_str_is_alpha("alpha");
	int	A = ft_str_is_alpha("ALPHA");
	int	z = ft_str_is_alpha("zxy");
	int	Z = ft_str_is_alpha("ZXY");
	int	bracket = ft_str_is_alpha("[");
	char	inv_1[] = "Hello world";
	printf("alpha=%d\n", a);
	printf("ALPHA=%d\n", A);
	printf("zxy=%d\n", z);
	printf("ZXY=%d\n", Z);
	printf("[=%d\n", bracket);
	printf("ZXY=%d\n", Z);
	printf("=%d\n", ft_str_is_alpha(""));
	printf("%s = %d\n", inv_1, ft_str_is_alpha(inv_1));
}
