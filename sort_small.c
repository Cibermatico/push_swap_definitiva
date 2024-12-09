/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsquarci <lsquarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:47:18 by lsquarci          #+#    #+#             */
/*   Updated: 2024/12/09 18:02:34 by lsquarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three_val(t_stack **a)
{
	int	max;

	max = ft_max(*a);
	if (is_sorted(*a))
		return ;
	if ((*a)->content == max)
	{
		ra(a, 1);
		if (!is_sorted(*a))
			sa(*a, 1);
	}
	else if ((*a)->next->content == max)
	{
		rra(a, 1);
		if (!is_sorted(*a))
			sa(*a, 1);
	}
	else
		sa(*a, 1);
}

void	sort_four_val(t_stack **a, t_stack **b)
{
	int	min;

	if (is_sorted(*a))
		return ;
	min = ft_min(*a);
	if ((*a)->content == min)
	{
		pb(a, b, 1);
		sort_three_val(a);
		pa(a, b, 1);
		return ;
	}
	else if ((*a)->next->content == min)
		ra(a, 1);
	else
		rra(a, 1);
	sort_four_val(a, b);
}

void	sort_five_val(t_stack **a, t_stack **b)
{
	int	min;

	if (is_sorted(*a))
		return ;
	min = ft_min(*a);
	if ((*a)->len == 4)
	{
		sort_four_val(a, b);
		pa(a, b, 1);
		return ;
	}
	if ((*a)->content == min)
		pb(a, b, 1);
	else if ((*a)->next->content == min || (*a)->next->next->content == min)
		ra(a, 1);
	else
		rra(a, 1);
	sort_five_val(a, b);
}
