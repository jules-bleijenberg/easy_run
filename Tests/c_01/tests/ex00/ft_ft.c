#include <stdio.h>

void	ft_ft(int *nbr);

int main(void)
{
	int	test;

	test = 53253;
	printf("%d\n", test);
	ft_ft(&test);
	printf("%d", test);
}
