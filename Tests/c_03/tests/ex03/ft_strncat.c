#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char dest1[100] = "ABCD";
	char dest2[100] = "ABCD";
	char src1[] = "EF";
	char dest3[100] = "HELLO ";
	char dest4[100] = "HELLO ";
	char src2[] = "WORLD";
	printf("%s = %s\n", ft_strncat(dest1, src1, 1), strncat(dest2, src1, 1));
	printf("%s = %s\n", ft_strncat(dest3, src2, 10), strncat(dest4, src2, 10));
}
