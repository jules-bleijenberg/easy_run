#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	*array;
	int	*inv_array;

	printf("2, %d\n", ft_ultimate_range(&array, 11, 13));
	printf("11 = %d\n", array[0]);
	printf("12 = %d\n", array[1]);
	printf("-1, %d\n", ft_ultimate_range(&inv_array, 15, 13));
	printf("(nil), %p\n", inv_array);
	//printf("(nil), %d\n", inv_array);
}
