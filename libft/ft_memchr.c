/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsquarci <lsquarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:39:44 by lsquarci          #+#    #+#             */
/*   Updated: 2024/01/10 15:37:42 by lsquarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char) c)
		{
			return ((void *)s + i);
		}
		i++;
	}
	return (NULL);
}
/*int main(void)
{
	char stringa1[] = "ciaooo";	
	char c = 'a';

	printf("%s\n",ft_memchr(stringa1, c, 2));
	return 0;
}*/