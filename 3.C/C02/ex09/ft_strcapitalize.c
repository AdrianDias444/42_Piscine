/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 09:02:48 by addias            #+#    #+#             */
/*   Updated: 2025/08/04 09:02:55 by addias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str [i] + 32;
		}
		if (!((str[i -1] >= 'a' && str[i -1] <= 'z')
				|| (str[i -1] >= 'A' && str[i -1] <= 'Z')
				|| (str[i -1] >= '0' && str[i -1] <= '9')))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}

/*
int main(void)
{
	char palavra[] = "OLa, tudo bem? Anão 42palavras quarenta-e-duas;
	 cinquenta+e+um";
	printf("%s", ft_strcapitalize(palavra));
}
*/