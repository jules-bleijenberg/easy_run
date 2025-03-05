#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	char hex[] = "0123456789ABCDEF";
	char oct[] = "poneyvif";
	char bad1[] = "poneyvifv";
	char bad2[] = "p";
	char bad3[] = "p32+";

	ft_putnbr_base(590, hex);
	printf("\n");
	ft_putnbr_base(-590, hex);
	printf("\n");
	ft_putnbr_base(0, hex);
	printf("\n");
	ft_putnbr_base(-0, hex);
	printf("\n");
	ft_putnbr_base(59, hex);
	printf("\n");
	ft_putnbr_base(590, oct);
	printf("\n");
	ft_putnbr_base(-590, oct);
	printf("\n");
	ft_putnbr_base(15, oct);
	printf("\n");
	ft_putnbr_base(-15, oct);
	printf("\n\nNO PRINT BELOW\n");
	ft_putnbr_base(15, bad1);
	ft_putnbr_base(-15, bad1);
	ft_putnbr_base(15, bad2);
	ft_putnbr_base(-15, bad2);
	ft_putnbr_base(15, bad3);
	ft_putnbr_base(-15, bad3);
}
