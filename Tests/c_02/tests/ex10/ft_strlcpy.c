#include <string.h>
#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char src_1[] = "Hello world";
	char dest_1[30];
	char org_dest_1[30];
	char dest_2[30];
	char org_dest_2[30];
	printf("%s %s\n", dest_1, src_1);
	printf("org: %zu -> %s %s\n", strlcpy(org_dest_1, src_1, 5), org_dest_1, src_1);
	printf("%d -> %s %s\n\n", ft_strlcpy(dest_1, src_1, 5), dest_1, src_1);

	printf("org: %zu -> %s %s\n", strlcpy(org_dest_2, src_1, 0), org_dest_2, src_1);
	printf("%d -> %s %s\n\n", ft_strlcpy(dest_2, src_1, 0), dest_2, src_1);
}
