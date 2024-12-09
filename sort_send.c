/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_send.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsquarci <lsquarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:47:10 by lsquarci          #+#    #+#             */
/*   Updated: 2024/12/09 17:47:11 by lsquarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_send(t_stack **a, t_stack **b)
{
	if (is_sorted(*a))
		return ;
	if ((*a)->len == 2)
	{
		sa(*a, 1);
		return ;
	}
	if ((*a)->len == 3)
		return (sort_three_val(a));
	if ((*a)->len == 4)
		return (sort_four_val(a, b));
	if ((*a)->len == 5)
		return (sort_five_val(a, b));
	return (sort(a, b));
}
