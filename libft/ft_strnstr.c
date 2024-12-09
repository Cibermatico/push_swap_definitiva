/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsquarci <lsquarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:28:43 by lsquarci          #+#    #+#             */
/*   Updated: 2024/01/12 14:28:52 by lsquarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	z;
	size_t	find_size;

	i = 0;
	z = 0;
	find_size = 0;
	if (!haystack && len == 0)
		return (NULL);
	while (needle[find_size] != '\0')
		find_size++;
	if (find_size == 0)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		z = 0;
		while (needle[z] != '\0' && needle[z] == haystack[i + z] && i + z < len)
		{
			if (z == find_size - 1)
				return ((char *)(haystack + i));
			z++;
		}
		i++;
	}
	return (NULL);
}
