/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 10:05:30 by addias            #+#    #+#             */
/*   Updated: 2025/08/05 10:05:33 by addias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] == s2[i]) && s1[i] && s2[i] && i < (n - 1))
		i++;
	return (s1[i] - s2[i]);
}

/*
	O QUE A FUNCAO PRECISA DE FAZER
	- Preciso de comparar duas strings caracter por caracter, while != '\0'
	- Caso elas sejam iguais a funcao retorna 0
	- Preciso de definir um limite de caracteres que seja comparado
*/