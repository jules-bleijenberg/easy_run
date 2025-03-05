/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                   :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: jbleijen <jbleijen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 15:08:00 by jbleijen          #+#    #+#             */
/*   Updated: 2025/02/24 12:47:34 by jbleijen       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int main(void)
{
	int array[] = {3,6,4,1};

	printf("%d", array[0]);
	printf("%d", array[1]);
	printf("%d", array[2]);
	printf("%d\n", array[3]);
	ft_sort_int_tab(&array[0], sizeof(array)/sizeof(array[0]));
	printf("%d", array[0]);
	printf("%d", array[1]);
	printf("%d", array[2]);
	printf("%d\n", array[3]);
}
