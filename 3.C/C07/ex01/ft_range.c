/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 11:08:38 by addias            #+#    #+#             */
/*   Updated: 2025/08/20 11:08:39 by addias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	strlen_inteiros(int min, int max)
{
	int	i;

	i = max - min;
	return (i);
}

int	*ft_range(int min, int max)
{
	int	*dest;
	int	i;
	int	numero;

	if (min >= max)
	{
		dest = NULL;
		return (dest);
	}
	dest = malloc(sizeof(int) * strlen_inteiros(min, max));
	if (!dest)
		return (NULL);
	i = 0;
	numero = min;
	while (i < (max - min))
	{
		dest[i] = numero;
		i++;
		numero++;
	}
	return (dest);
}

/* int main(void)
{
	int *a = ft_range(5,5);
	int i= 0;
	while(i < 1){
		printf("%d,", a[i]);
		i++;
	}
} 
 */