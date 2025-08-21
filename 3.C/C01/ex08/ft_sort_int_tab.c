/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 09:34:49 by addias            #+#    #+#             */
/*   Updated: 2025/08/03 09:34:54 by addias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	count;

	count = 0;
	while (count < (size - 1))
	{
		if (tab[count] > tab[count + 1])
		{
			temp = tab[count];
			tab[count] = tab[count + 1];
			tab[count + 1] = temp;
			count = 0;
		}
		else
			count++;
	}
}


int	main(void)
{
	int		tab[3];
	int		size;
	int		i;
	char	c;

	i = 0;
	tab = {3, 5, 2, 1, 8};
	size = 5;
	ft_sort_int_tab(tab, size);
	while (i < size)
	{
		c = tab[i] + '0';
		write(1, &c, 1);
		i++;
	}
}
