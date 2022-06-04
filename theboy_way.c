/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   theboy_way.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamellal <mamellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 18:07:59 by mamellal          #+#    #+#             */
/*   Updated: 2022/03/30 11:02:27 by mamellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	s_t(t_stack **a, int size)
{
	t_stack	*top;
	t_stack	*bottom;
	int		i;
	t_stack	*middle;

	if (size == 2)
	{
		if ((*a)->content > (*a)->next->content)
			sa(*a);
		return ;
	}	
	refresh(&top, &middle, &bottom, a);
	i = 0;
	while (i < 3 && !check_sorted(*a))
	{
		if (bottom->content < top->content
			&& middle->content < bottom->content)
			ra(*a);
		else if (top->content > middle->content)
			sa(*a);
		else if (middle->content > bottom->content)
			rra(a);
		refresh(&top, &middle, &bottom, a);
		i++;
	}
}

int	check_sorted(t_stack *a)
{
	if (!a)
		return (0);
	while (a->next != 0)
	{
		if (a->next->content < a->content)
			return (0);
		a = a->next;
	}
	return (1);
}

int	get_min(t_stack **a, int size)
{
	int		i;
	t_stack	*current;
	int		minpos;
	int		min;

	current = *a;
	minpos = 0;
	if (current)
		min = current->content;
	i = 0;
	while (current && i < size)
	{
		if (current->content < min)
		{
			min = current->content;
			minpos = i;
		}
		current = current->next;
		i++;
	}
	return (minpos);
}
