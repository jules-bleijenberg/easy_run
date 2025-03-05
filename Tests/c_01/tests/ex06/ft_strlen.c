/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                         :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: jbleijen <jbleijen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:34:26 by jbleijen          #+#    #+#             */
/*   Updated: 2025/02/24 12:43:19 by jbleijen       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	a[] = "Hello WHAT";

	printf("%d", ft_strlen(&a[0]));
	return (0);
}
