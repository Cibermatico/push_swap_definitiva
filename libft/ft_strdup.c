/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsquarci <lsquarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:26:32 by lsquarci          #+#    #+#             */
/*   Updated: 2024/01/09 19:26:32 by lsquarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	int		j;
	char	*copy;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	copy = (char *)malloc(i * sizeof(char) + 1);
	if (!copy)
		return (NULL);
	while (j <= i)
	{
		copy[j] = src[j];
		j++;
	}
	copy[i] = '\0';
	return (copy);
}

/*int main(void)
	{
		char *array = "ciao1";
		printf("%s", ft_strdup(array));
		return 0;
	}*/
