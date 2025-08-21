/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 10:14:39 by addias            #+#    #+#             */
/*   Updated: 2025/08/02 10:14:42 by addias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temp;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		temp = tab[start];
		
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}

/*
int	main(void)
{
	int	arr[];
	int	size;

	arr = {4, 2, 1, 5, 7};
	size = 5;
	ft_rev_int_tab(arr, size);
}
	int i = 0;
	while (i < size)
	{
		char c = tab[i] + '0';
		write(1, &c, 1);
		i++;
	}
*/