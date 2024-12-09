/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                         :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: lsquarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:31:23 by lsquarci          #+#    #+#             */
/*   Updated: 2024/01/09 16:40:33 by lsquarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t n)
{
	size_t			i;
	unsigned char	*temp;

	i = 0;
	temp = (unsigned char *)ptr;
	while (i < n)
	{
		temp[i] = c;
		i++;
	}
	return (ptr);
}
/*void printArray(int arr[], int n) 
{ 
   for (int i=0; i<n; i++) 
	  printf("%c ", arr[i]); 
} 
int main() 
{ 
	int b = 10; 
	int arr[b]; 
  
	
	ft_memset(arr, '.', b*sizeof(int)); 
	
	printArray(arr, b); 
  
	return 0; 
} */