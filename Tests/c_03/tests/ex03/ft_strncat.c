#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char dest1[] = "ABCD";
	char src2[100] = "EF";
	char dest3[] = "ABCD";
	char src4[100] = "EF";
	printf("Test not working properly, not sure why, use man strncat\n");
	printf("%s\n", strncat(dest1, src2, 1));
	printf("%s\n", ft_strncat(dest3, src4, 1));
}
