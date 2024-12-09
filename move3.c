/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsquarci <lsquarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:46:43 by lsquarci          #+#    #+#             */
/*   Updated: 2024/12/09 17:46:44 by lsquarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack **a, int print)
{
	t_stack	*temp;
	t_stack	*prev;
	int		len;

	if (!a || !(*a) || !(*a)->next)
		return ;
	temp = *a;
	len = 1;
	prev = NULL;
	while (temp->next)
	{
		temp->len--;
		prev = temp;
		temp = temp->next;
		len++;
	}
	prev->next = NULL;
	temp->next = *a;
	*a = temp;
	(*a)->len = len;
	if (print == 1)
		write(1, "rra\n", 4);
}

void	rrb(t_stack **b, int print)
{
	t_stack	*temp;
	t_stack	*prev;
	int		len;

	if (!b || !(*b) || !(*b)->next)
		return ;
	temp = *b;
	len = 1;
	prev = NULL;
	while (temp->next)
	{
		temp->len--;
		prev = temp;
		temp = temp->next;
		len++;
	}
	prev->next = NULL;
	temp->next = *b;
	*b = temp;
	(*b)->len = len;
	if (print == 1)
		write(1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b, int print)
{
	rra(a, 0);
	rrb(b, 0);
	if (print == 1)
		write(1, "rrr\n", 4);
}
