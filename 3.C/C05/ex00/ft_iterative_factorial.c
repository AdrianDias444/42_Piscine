/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 09:47:59 by addias            #+#    #+#             */
/*   Updated: 2025/08/08 09:48:01 by addias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fatorial;

	fatorial = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		fatorial = fatorial * nb;
		nb--;
	}
	return (fatorial);
}
