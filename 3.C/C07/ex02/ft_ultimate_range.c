/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 11:10:36 by addias            #+#    #+#             */
/*   Updated: 2025/08/20 11:10:38 by addias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	strlen_inteiros(int min, int max)
{
	int	i;

	i = max - min;
	return (i);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	number;

	i = 0;
	number = min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * strlen_inteiros(min, max));
	if (range == NULL || range == 0)
		return (-1);
	while (i < (max - min))
	{
		range[0][i] = number;
		number++;
		i++;
	}
	return (max - min);
}
/* #include <stdio.h>
 int main(void)
{

	int *range;
	int i = 0;

	ft_ultimate_range(&range, -5, 5);
	while(i < 10){
		printf("%d,", range[i]);
		i++;
	}
} 
 */