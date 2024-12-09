/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsquarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:31:23 by lsquarci          #+#    #+#             */
/*   Updated: 2024/01/09 16:40:33 by lsquarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The bzero() function erases the data in the n bytes of the memory
       starting at the location pointed to by s, by writing zeros (bytes
       containing '\0') to that area.
RETURN: none*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*temp;

	i = 0;
	temp = (unsigned char *)s;
	while (i < n)
	{
		temp[i] = '\0';
		i++;
	}
}
/*
void printArray(int arr[], int n) 
{ 
   for (int i=0; i<n; i++) 
      printf("%d ", arr[i]); 
} 

int main() 
{ 
    int b = 10; 
    int arr[b]; 
      
    bzero(arr, b*sizeof(int)); 
    
    printArray(arr, b); 
  
    return 0; 
} */
