/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logica.c                                            :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: jbleijen <jbleijen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 11:05:27 by jbleijen          #+#    #+#             */
/*   Updated: 2025/03/02 11:11:36 by jbleijen       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	*get_default_possible_numbers()
{
	int *ptr;

	ptr = malloc(16);
	ptr[0] = 1;
	ptr[1] = 2;
	ptr[2] = 3;
	ptr[3] = 4;
	return ptr;
}

//int	*get_relevant_border_numbers(int x, int y, int *border_numbers)
//{
//	int	border_offset;
//	int	y_offset;
//	int	*ptr;
//
//	border_offset = 4;
//	y_offset = border_offset * 2;
//	ptr = malloc(16);
//	ptr[0] = border_numbers[x];
//	ptr[1] = border_numbers[x + border_offset];
//	ptr[2] = border_numbers[y + border_offset + y_offset];
//	ptr[3] = border_numbers[y + border_offset + y_offset];
//	return ptr;
//}

//void	filter_border_impossible_numbers(int x, int y, int *matrix, int *border_numbers)
//{
//	
//}

void	filter_matrix_impossible_numbers(int pos, int *matrix, int *possible_numbers)
{
	int	i;
	int	x;
	int	y;

	x = pos % 4;
	y = pos / 4;
	i = 0;
	// printf("--PXY: %d: %d, %d\n", pos, x, y);
	while (i < 4)
	{
		// printf("--X: %d, %d\n", y*4+i, matrix[y * 4 + i]);
		// printf("--Y: %d, %d\n", i*4+x, matrix[i * 4 + x]);
		if(matrix[y * 4 + i] != 0)
		{
			possible_numbers[matrix[y * 4 + i] -1] = -1;
		}
		if(matrix[i * 4 + x] != 0)
		{
			possible_numbers[matrix[i * 4 + x] -1] = -1;
		}
		i++;	
	}
}

//int	*get_possible_numbers(int x, int y, int *matrix, int *border_numbers)
//{
//	int *possible_numbers;
//	
//	possible_numbers = get_default_possible_numbers();
//	relevant_border_numbers = get_relevant_border_numbers(x, y, border_numbers);
//	filter_border_impossible_numbers(x, y);
//}

void	print_matrix(int *matrix)
{
	int i = 0;
	int j = 0;
	printf("MATRIX\n");
	while (i < 4)
	{
		while (j < 4)
		{
			printf("%d, ", matrix[i*4+j]);
			//char c = '0' + matrix[i * 4 + j];
			//write(1, &c, 1);
			j++;
		}
		j = 0;
		printf("\n");
		//write(1, "^\n", 2);
		i++;
	}
}

int	recursive_fill(int pos, int *matrix, int *border_numbers)
{
	int	i = 0;
	int	*numbers;
	//int	numbers[4] = {1,2,3,4};
	pos++;

	//printf(" %d ", pos);
	if (pos == 16)
		return 1;
	if (matrix[pos] != 0)
	{
		return recursive_fill(pos, matrix, border_numbers);
	}
	//possible_numbers = get_possible_numbers(x, y, matrix, border_numbers);
	numbers = get_default_possible_numbers();
	printf("Starting: %d\n", pos);
	print_matrix(matrix);
	filter_matrix_impossible_numbers(pos, matrix, numbers);
	while (i < 4)
	{
		// if number is not possible
		if (numbers[i] == -1)
		{
			printf("Invalid PV: %d: %d\n", pos, numbers[i]);
			i++;
			continue;
		}
		printf("Trying PV: %d: %d\n", pos, numbers[i]);
		// update matrix
		matrix[pos] = numbers[i];
		printf("FINAL: %d, %d\n", pos, numbers[i]);
		if (recursive_fill(pos, matrix, border_numbers) == 1)
		{
			printf("SUCCES: %d, %d\n", pos, numbers[i]);
			return 1;
		}
		else
		{
			printf("Recursive Failed %d\n", pos);
		}
		i++;
	}
	// undo update to matrix
	printf("Failed %d\n", pos);
	matrix[pos] = 0;
	return -1;
}

int	main()
{
	int matrix[16] = {4,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0};
	int border_numbers[16] = {4, 3, 2, 1, 1, 2, 2, 2, 4, 3, 2, 1, 1, 2, 2, 2};
	recursive_fill(0, matrix, border_numbers);
	print_matrix(matrix);
}
