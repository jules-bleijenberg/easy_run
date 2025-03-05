/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                         :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: jbleijen <jbleijen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:04:38 by jbleijen          #+#    #+#             */
/*   Updated: 2025/02/24 12:39:58 by jbleijen       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr(char *str);

int	main(void)
{
	char	a[] = "Hello World!";;

	ft_putstr(&a[0]);
	return (0);
}
