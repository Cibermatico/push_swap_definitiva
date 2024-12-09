/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsquarci <lsquarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:46:12 by lsquarci          #+#    #+#             */
/*   Updated: 2024/12/09 17:46:13 by lsquarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	if (argc == 1)
		return (0);
	if (argc == 2)
		a = pre_init(&argv[1]);
	else
	{
		argv++;
		a = pre_init(argv);
	}
	b = NULL;
	if (!a)
		return (0);
	sort_send(&a, &b);
	free_stack(a);
	free_stack(b);
}
