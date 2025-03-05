#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	c_dest1[30];
	char	c_src1[] = "Hello World";
	char	*c_output1 = strncpy(c_dest1, c_src1, 20);
	char	dest1[30];
	char	src1[] = "Hello World";
	char	*output1 = ft_strncpy(dest1, src1, 20);
	
	char	c_dest2[30];
	char	c_src2[] = "Hello World";
	char	*c_output2 = strncpy(c_dest2, c_src2, 3);
	char	dest2[30];
	char	src2[] = "Hello World";
	char	*output2 = ft_strncpy(dest2, src2, 3);
	
	printf("%s\n", c_src1);
	printf("%s\n", c_dest1);
	printf("%s\n", c_output1);
	printf("%s\n", src1);
	printf("%s\n", dest1);
	printf("%s\n", output1);
	
	printf("-----------\n");

	printf("%s\n", c_src2);
	printf("%s\n", c_dest2);
	printf("%s\n", c_output2);
	printf("%s\n", src2);
	printf("%s\n", dest2);
	printf("%s\n", output2);
}
