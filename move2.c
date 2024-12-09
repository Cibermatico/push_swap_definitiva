/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsquarci <lsquarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:46:33 by lsquarci          #+#    #+#             */
/*   Updated: 2024/12/09 17:46:33 by lsquarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack **a, int print)
{
	t_stack	*temp;
	t_stack	*last;

	if (!a || !(*a) || !(*a)->next)
		return ;
	temp = *a;
	temp->len = 1;
	*a = (*a)->next;
	last = *a;
	while (last->next)
	{
		last->next->len++;
		last = last->next;
	}
	last->next = temp;
	temp->next = NULL;
	(*a)->len++;
	if (print == 1)
		write(1, "ra\n", 3);
}

void	rb(t_stack **b, int print)
{
	t_stack	*temp;
	t_stack	*last;

	if (!b || !(*b) || !(*b)->next)
		return ;
	temp = *b;
	temp->len = 1;
	*b = (*b)->next;
	last = *b;
	while (last->next)
	{
		last->next->len++;
		last = last->next;
	}
	last->next = temp;
	temp->next = NULL;
	(*b)->len++;
	if (print == 1)
		write(1, "rb\n", 3);
}

void	rr(t_stack **a, t_stack **b, int print)
{
	ra(a, 0);
	rb(b, 0);
	if (print == 1)
		write(1, "rr\n", 3);
}
