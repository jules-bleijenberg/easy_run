/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                        :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: jbleijen <jbleijen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:44:03 by jbleijen          #+#    #+#             */
/*   Updated: 2025/02/24 12:35:03 by jbleijen       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 37;
	b = 5;
	div = 10;
	mod = 10;
	printf("%d\n", div);
	printf("%d\n", mod);
	ft_div_mod(a, b, &div, &mod);
	printf("%d\n", div);
	printf("%d\n", mod);
	return (0);
}
