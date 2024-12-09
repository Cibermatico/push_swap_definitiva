/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsquarci <lsquarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:46:53 by lsquarci          #+#    #+#             */
/*   Updated: 2024/12/09 17:46:54 by lsquarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "libft.h"

typedef struct s_stack
{
	int				content;
	struct s_stack	*next;
	int				len;
}	t_stack;

int		ft_min(t_stack *stack);
int		ft_max(t_stack *stack);
int		is_sorted(t_stack *a);
void	sa(t_stack *a, int print);
void	sb(t_stack *b, int print);
void	ss(t_stack *a, t_stack *b, int print);
void	pb(t_stack **a, t_stack **b, int print);
void	pa(t_stack **a, t_stack **b, int print);
void	ra(t_stack **a, int print);
void	rb(t_stack **b, int print);
void	rr(t_stack **a, t_stack **b, int print);
void	rra(t_stack **a, int print);
void	rrb(t_stack **b, int print);
void	rrr(t_stack **a, t_stack **b, int print);
void	sort_send(t_stack **a, t_stack **b);
t_stack	*pre_init(char **list);
t_stack	*pilenew(int content);
void	free_stack(t_stack *stack);
void	sort_three_val(t_stack **a);
void	sort_four_val(t_stack **a, t_stack **b);
void	sort_five_val(t_stack **a, t_stack **b);
void	sort(t_stack **a, t_stack **b);
int		abs(int x);

void	put_to_a(t_stack **a, t_stack **b);
int		r_or_rr(t_stack **stack, int chunk);

#endif