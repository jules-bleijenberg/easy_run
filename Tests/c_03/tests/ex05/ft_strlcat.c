#include <bsd/string.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char dest1[9] = "ABCD";
	char dest2[9] = "ABCD";
	char src1[] = "EF";
	char dest3[9] = "ABCD";
	char dest4[9] = "ABCD";
	char src2[] = "EF";
	char dest5[9] = "ABCD";
	char dest6[9] = "ABCD";
	char src3[] = "EF";
	char dest7[9] = "ABCD";
	char dest8[9] = "ABCD";
	char src4[] = "EF";
	char dest9[9] = "ABCD";
	char dest10[9] = "ABCD";
	char src5[] = "EF";

	printf("%d - %s =  %zu - %s\n", ft_strlcat(dest1, src1, 0), dest1, strlcat(dest2, src1, 0), dest2);
	printf("%d - %s =  %zu - %s\n", ft_strlcat(dest3, src2, 1), dest3, strlcat(dest4, src2, 1), dest4);
	printf("%d - %s =  %zu - %s\n", ft_strlcat(dest5, src3, 2), dest5, strlcat(dest6, src3, 2), dest6);
	printf("%d - %s =  %zu - %s\n", ft_strlcat(dest7, src4, 6), dest7, strlcat(dest8, src4, 6), dest8);
	printf("%d - %s =  %zu - %s\n", ft_strlcat(dest9, src5, 7), dest9, strlcat(dest10, src5, 7), dest10);
}
