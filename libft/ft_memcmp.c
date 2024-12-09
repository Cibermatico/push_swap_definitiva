/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsquarci <lsquarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:02:12 by lsquarci          #+#    #+#             */
/*   Updated: 2024/01/11 17:42:10 by lsquarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*temp1;
	const unsigned char	*temp2;

	temp1 = (const unsigned char *)s1;
	temp2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (temp1[i] == temp2[i])
			i++;
		else
			return (temp1[i] - temp2[i]);
	}
	return (0);
}
/*int main(void)
{
    const char str1[] = "Hello, World!";
    const char str2[] = "Hello, world!";
	int result = ft_memcmp(str1,str2,7);
	
	printf("%d", result);
	return 0;
}*/