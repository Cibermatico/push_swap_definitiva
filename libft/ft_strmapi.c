/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsquarci <lsquarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:28:05 by lsquarci          #+#    #+#             */
/*   Updated: 2024/01/11 15:05:03 by lsquarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*result;

	i = 0;
	if (!s || !f)
		return (NULL);
	result = (char *)malloc(ft_strlen(s) + 1);
	if (result == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*
char transform(unsigned int index, char c)
{
	return (c - 32);
}

int main(void)
{
	char *stringa = "ciao";
	char *result = ft_strmapi(stringa,transform);
	printf("%s", result);
	return 0;
}
*/