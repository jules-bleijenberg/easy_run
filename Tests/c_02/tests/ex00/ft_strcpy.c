#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int main(void)
{
	char src[] = "Hello world";
	char dest[50];
	char* fun = ft_strcpy(&dest[0], &src[0]);
	printf("%s\n", src);
	printf("%s\n", dest);
	printf("%s", fun);
}
