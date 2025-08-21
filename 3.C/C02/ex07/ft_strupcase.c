/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 08:28:06 by addias            #+#    #+#             */
/*   Updated: 2025/08/04 08:28:08 by addias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
		{
		}
		else
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*
int main(void)
{
	char palavra [] = "jsafljj.fsakfa";
	printf("%s", ft_strupcase(palavra));
}
*/