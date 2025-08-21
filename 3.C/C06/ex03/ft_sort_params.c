/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 07:57:35 by addias            #+#    #+#             */
/*   Updated: 2025/08/12 07:57:36 by addias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printar(int argc, char **argv, int c, int i)
{
	while (c < argc)
	{
		i = 0;
		while (argv[c][i] != '\0')
		{
			write(1, &argv[c][i], 1);
			i++;
		}
		write(1, "\n", 1);
		c++;
	}
}

int	main(int argc, char **argv)
{
	int		c;
	char	*temp;
	int		counter;
	int		i;

	counter = argc - 1;
	while (counter > 0)
	{
		c = 1;
		while (c < argc - 1)
		{
			i = 0;
			while (argv[c][i] == argv[c + 1][i] && argv[c][i] != '\0')
				i++;
			if (argv[c][i] > argv[c + 1][i])
			{
				temp = argv[c];
				argv[c] = argv[c + 1];
				argv[c + 1] = temp;
			}
			c++;
		}
		counter--;
	}
	printar(argc, argv, 1, 0);
}
