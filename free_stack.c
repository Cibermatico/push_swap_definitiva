/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsquarci <lsquarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:45:45 by lsquarci          #+#    #+#             */
/*   Updated: 2024/12/09 17:45:46 by lsquarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack *stack)
{
	t_stack	*temp;

	if (!stack)
		return ;
	while (stack->next)
	{
		temp = stack->next;
		free(stack);
		stack = temp;
	}
	free(stack);
}
