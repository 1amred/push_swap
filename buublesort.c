/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buublesort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamellal <mamellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:18:15 by mamellal          #+#    #+#             */
/*   Updated: 2022/03/29 01:03:54 by mamellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	last_part(t_stack **a, int min, int size)
{
	int	i;

	i = min;
	while (i < size)
	{
		rra (a);
		i++;
	}
}

void	fourth(t_stack **a, t_stack **b, int size)
{
	int	min;
	int	i;
	int	limit;
	int	x;

	x = 0;
	if (check_sorted(*a))
		exit(0);
	size = ft_lstsize(*a);
	limit = size - 3;
	while (x++ < limit)
	{
		size = ft_lstsize (*a);
		min = get_min (a, size);
		if (!first_part (a, min, size))
			last_part (a, min, size);
		pb (b, a);
	}
	s_t (a, size);
	i = 0;
	while (i++ < limit)
	{
		pa(a, b);
	}
}

int	get_max(t_stack	**head, int size)
{
	int		i;
	t_stack	*current;
	int		maxpos;
	int		max;

	current = *head;
	maxpos = 0;
	if (current)
			max = current->content;
	i = 0;
	while (current && i < size)
	{
		if (current->content > max)
		{
			max = current->content;
			maxpos = i;
		}
		current = current->next;
		i++;
	}
	return (maxpos);
}
