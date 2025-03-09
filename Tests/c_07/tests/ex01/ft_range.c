#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	*array = ft_range(11, 13);
	int	*array_2 = ft_range(1, 2);
	int	*inv_array = ft_range(11, 1);
	printf("11 = %d\n", array[0]);
	printf("12 = %d\n", array[1]);
	printf("1 = %d\n", array_2[0]);
	printf("(nil) = %p\n", inv_array);
}
