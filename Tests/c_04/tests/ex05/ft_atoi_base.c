#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	char hex[] = "0123456789ABCDEF";
	char oct[] = "poneyvif";
	char bad1[] = "poneyvifv";
	char bad2[] = "p";
	char bad3[] = "p32+";

	printf("TESTING\n");
	//ft_atoi_base("24E", hex);
	printf("%d = 590\n", ft_atoi_base("24E", hex));
	printf("%d = -590\n", ft_atoi_base("-24E", hex));
	printf("%d\n", ft_atoi_base("0", hex));
	printf("%d\n", ft_atoi_base("-0", hex));
	printf("%d\n", ft_atoi_base("3B", hex));
	printf("%d\n", ft_atoi_base("oooi", oct));
	printf("%d\n", ft_atoi_base("-oooi", oct));
	printf("%d\n", ft_atoi_base("of", oct));
	printf("%d\n", ft_atoi_base("-of", oct));
	printf("\n\nNO PRINT BELOW\n");
	printf("%d\n", ft_atoi_base("15", bad1));
	printf("%d\n", ft_atoi_base("-15", bad1));
	printf("%d\n", ft_atoi_base("15", bad2));
	printf("%d\n", ft_atoi_base("-15", bad2));
	printf("%d\n", ft_atoi_base("15", bad3));
	printf("%d\n", ft_atoi_base("-15", bad3));
}
