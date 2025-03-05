#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char test[] = "`abcxyz~";
	printf("%s", ft_strupcase(test));
}
