/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsquarci <lsquarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:47:01 by lsquarci          #+#    #+#             */
/*   Updated: 2024/12/09 17:47:02 by lsquarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	cost_to_top(t_stack **stack)
{
	int		value;
	t_stack	*temp;

	value = ft_max(*stack);
	temp = *stack;
	while (temp)
	{
		if (temp->content == value)
		{
			if (temp->len == (*stack)->len)
				break ;
			if (((*stack)->len - temp->len) < temp->len)
				return (1);
			else
				return (2);
		}
		temp = temp->next;
	}
	return (0);
}

static int	lst_el(t_stack **stack)
{
	t_stack	*temp;

	temp = *stack;
	while (temp->next)
		temp = temp->next;
	return (temp->content);
}

static void	organize(t_stack **a, t_stack **b)
{
	if (*a && (*a)->next)
	{
		while (lst_el(a) < ft_max(*a) && lst_el(a) > ft_max(*b))
		{
			if (cost_to_top(b) == 2)
				rrr(a, b, 1);
			else
				rra(a, 1);
		}
	}
}

static void	put_to_top(t_stack **a, t_stack **b)
{
	int	i;

	i = cost_to_top(b);
	while ((*b)->content != ft_max(*b))
	{
		if ((*a) && (*a)->next && !(lst_el(a) < ft_max(*a)
				&& (*b)->content < lst_el(a)))
			break ;
		if (i == 1)
			rb(b, 1);
		else
			rrb(b, 1);
	}
}

void	put_to_a(t_stack **a, t_stack **b)
{
	while ((*b))
	{
		organize(a, b);
		put_to_top(a, b);
		pa(a, b, 1);
		if (((*b) && ft_max(*b) > (*a)->content) && cost_to_top(b) == 1)
			rr(a, b, 1);
		else if ((*b) && ft_max(*b) > (*a)->content)
			ra(a, 1);
	}
}
