/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsquarci <lsquarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:45:56 by lsquarci          #+#    #+#             */
/*   Updated: 2024/12/09 17:45:57 by lsquarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

static int	is_valid_num(char *num)
{
	int		len;
	int		i;
	char	*max;

	len = ft_strlen(num);
	if (len > 11 || (len == 11 && num[0] != '-'))
		return (0);
	if (num[0] == '-')
		max = "-2147483648";
	else
		max = "2147483647";
	i = 0;
	if (len == 11 || (len == 10 && num[0] != '-'))
	{
		while (max[i])
		{
			if (num[i] < max[i])
				return (1);
			else if (num[i] > max[i])
				return (0);
			i++;
		}
	}
	return (1);
}

static int	valid_args(char **args)
{
	int	i;
	int	y;
	int	t;

	i = 0;
	while (args[i])
	{
		y = i + 1;
		t = 0;
		if (args[i][0] == '-' && args[i][1])
			t++;
		while (args[i][t] && args[i][t] >= '0' && args[i][t] <= '9' && t < 11)
			t++;
		if (args[i][t] || !is_valid_num(args[i]))
			return (0);
		while (args[y])
		{
			if (ft_atoi(args[i]) == ft_atoi(args[y]))
				return (0);
			y++;
		}
		i++;
	}
	return (1);
}

static void	add_top(t_stack **a, t_stack *new)
{
	t_stack	*temp;

	temp = *a;
	if (!new || !a)
		return ;
	if (!*a)
	{
		*a = new;
		return ;
	}
	while (temp->next)
	{
		temp->next->len++;
		temp = temp->next;
	}
	temp->next = new;
}

static t_stack	*init(char **tab_args)
{
	t_stack	*a;
	t_stack	*temp;

	if (!tab_args[0] || !valid_args(tab_args))
	{
		write(2, "Error\n", 6);
		return (NULL);
	}
	a = pilenew(ft_atoi(tab_args[0]));
	if (!a)
		return (free(a), NULL);
	while (tab_args[a->len])
	{
		temp = pilenew(ft_atoi(tab_args[a->len]));
		if (!temp)
			return (free_stack(a), NULL);
		add_top(&a, temp);
		a->len++;
	}
	return (a);
}

t_stack	*pre_init(char **list)
{
	char	**tab_args;
	t_stack	*temp;
	int		i;

	if (!list[1])
	{
		i = 0;
		tab_args = ft_split(*list, ' ');
		temp = init(tab_args);
		while (tab_args[i])
		{
			free(tab_args[i]);
			i++;
		}
		free(tab_args);
		return (temp);
	}
	else
		return (init(list));
}
