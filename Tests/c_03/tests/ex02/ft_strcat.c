#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char dest1[100] = "ABCD";
	char src2[] = "EF";
	char dest3[100] = "ABCD";
	char src4[] = "EF";
	printf("%s = %s\n", strcat(dest3, src4), ft_strcat(dest1, src2));
}
