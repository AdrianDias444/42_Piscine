/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 17:46:06 by addias            #+#    #+#             */
/*   Updated: 2025/08/04 17:46:08 by addias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
int main()
{

}
*/
/*
	O QUE A FUNCAO PRECISA DE FAZER
	- Preciso de comparar duas strings caracter por caracter,
	enquanto eles sao diferentes de '\0'
	- Caso elas sejam iguais a funcao retorna 0
*/