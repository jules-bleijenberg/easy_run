/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                               :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: jbleijen <jbleijen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:52:27 by jbleijen          #+#    #+#             */
/*   Updated: 2025/02/24 16:27:25 by jbleijen       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int a;
	int b;

	a = 37;
	b = 5;
	printf("%d\n", a);
	printf("%d\n", b);
	ft_ultimate_div_mod(&a, &b);
	printf("%d\n", a);
	printf("%d\n", b);
	return (0);
}
