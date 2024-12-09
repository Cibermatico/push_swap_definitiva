/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsquarci <lsquarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:34:23 by lsquarci          #+#    #+#             */
/*   Updated: 2024/12/09 16:52:53 by lsquarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*output;
	unsigned int	total;

	if (count && size && count > (UINT_MAX / size))
		return (NULL);
	total = count * size;
	output = malloc(total);
	if (!output)
		return (NULL);
	ft_bzero(output, total);
	return (output);
}
