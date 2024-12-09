/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsquarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:06:22 by lsquarci          #+#    #+#             */
/*   Updated: 2024/01/09 17:10:09 by lsquarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*temp;
	unsigned char	*temp1;

	i = 0;
	temp = (unsigned char *)dest;
	temp1 = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (n == 0)
		return (dest);
	while (i < n)
	{
		temp[i] = temp1[i];
		i++;
	}
	return (dest);
}

/*int main () 
{
   const int src[4] = {1,2,3,4};
   int dest[10] = {9,9,9,9,9,9,9,9};
  
   for (int i = 0; i < 8; i++)
   		printf(" %d",dest[i]);
	puts("\n");
   ft_memcpy(dest, src, 4 *sizeof(int));   //ok, ricordarsi che sizeof(int) = 4
   puts("Dopo ft_memcpy:");
   for (int i = 0; i < 8; i++)
   		printf(" %d",dest[i]);
      
   return(0);
}*/
