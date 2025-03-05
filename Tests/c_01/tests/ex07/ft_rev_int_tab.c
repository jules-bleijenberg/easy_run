/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                    :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: jbleijen <jbleijen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:49:34 by jbleijen          #+#    #+#             */
/*   Updated: 2025/02/24 12:45:30 by jbleijen       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int main(void)
{
	int array[] = {3,6,4};

	printf("%d", array[0]);
	printf("%d", array[1]);
	printf("%d\n", array[2]);
	ft_rev_int_tab(&array[0], 3);
	printf("%d", array[0]);
	printf("%d", array[1]);
	printf("%d\n", array[2]);
}
