/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                           :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: jbleijen <jbleijen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:39:08 by jbleijen          #+#    #+#             */
/*   Updated: 2025/02/24 12:29:23 by jbleijen       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_swap(int *a, int *b);

int main(void)
{
	int test1;
	int test2;
	int *ptr1;
	int *ptr2;

	test1 = 1;
	test2 = 5;
	ptr1 =  &test1;
	ptr2 =  &test2;
	printf("%d", test1);
	printf("%d", test2);
	ft_swap(ptr1, ptr2);
	printf("%d", test1);
	printf("%d", test2);
	return (0);
}
