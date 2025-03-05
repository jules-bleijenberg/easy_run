/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                    :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: jbleijen <jbleijen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:31:25 by jbleijen          #+#    #+#             */
/*   Updated: 2025/02/24 12:24:26 by jbleijen       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int main(void)
{
	int test;
	int *ptr1;
	int **ptr2;
	int ***ptr3;
	int ****ptr4;
	int *****ptr5;
	int ******ptr6;
	int *******ptr7;
	int ********ptr8;
	int *********ptr9;

	test = 0;
	ptr1 =  &test;
	ptr2 =  &ptr1;
	ptr3 =  &ptr2;
	ptr4 =  &ptr3;
	ptr5 =  &ptr4;
	ptr6 =  &ptr5;
	ptr7 =  &ptr6;
	ptr8 =  &ptr7;
	ptr9 =  &ptr8;
	printf("%d", test);
	ft_ultimate_ft(ptr9);
	printf("%d", test);
	return (0);
}
