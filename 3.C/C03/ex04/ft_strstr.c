/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 12:56:33 by addias            #+#    #+#             */
/*   Updated: 2025/08/05 12:56:37 by addias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	pos;
	int	i;

	if (to_find[0] == '\0')
		return (str);
	pos = 0;
	while (str[pos] != '\0')
	{
		if (str[pos] == to_find[0])
		{
			i = 1;
			while (to_find[i] != '\0' && str[pos + i] == to_find[i])
				i++;
			if (to_find[i] == '\0')
				return (&str[pos]);
		}
		++pos;
	}
	return (0);
}

/*
int main(void)
{
  char *s = "helplo people of the world";
  char *tofind = "people";
  char    *resultado = ft_strstr(s, tofind);
  printf("%s", resultado);
}
*/
/*
	O QUE A FUNCAO PRECISA DE FAZER
	- comparar os caracteres equivalentes de ambas as strings
	- quando os exatos mesmo caracteres estiverem dentro da string
*/
