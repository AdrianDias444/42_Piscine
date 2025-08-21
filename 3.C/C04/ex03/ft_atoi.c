/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 19:07:26 by addias            #+#    #+#             */
/*   Updated: 2025/08/11 19:07:28 by addias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int	signal_counter;
	int	res;

	signal_counter = 0;
	res = 0;
	i = 0;
	while (str [i] == ' ' || (str[i] >= '\a' && str[i] <= '\r'))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str [i] == '-')
			signal_counter++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	if (signal_counter % 2 != 0)
		res = res * -1;
	return (res);
}

/*
int main()
{
	char *str = "---+--+1234ab567";
	printf("%d\n", ft_atoi(str));
}
*/
