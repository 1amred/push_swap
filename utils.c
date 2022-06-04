/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamellal <mamellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 20:41:09 by mamellal          #+#    #+#             */
/*   Updated: 2022/03/29 23:54:06 by mamellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb_a(t_stack **a, t_stack **b)
{
	t_stack	*tmp;
	t_stack	*current;
	int		i;
	int		max;
	int		size;

	size = ft_lstsize(*b);
	max = get_max(b, size);
	i = 0;
	current = *b;
	tmp = *b;
	while (*b)
	{
		size = ft_lstsize(*b);
		max = get_max(b, size);
		if (max == 0)
			pa(a, b);
		else if (max <= size / 2)
			rb(*b);
		else if (max > size / 2)
			rrb(b);
	}
}

void	norm(t_stack **a, t_stack **b, int *chunk, t_stack save)
{
	int	j;
	int	i;

	j = 0;
	while (*a)
	{
		if (j == save.k)
		{
			chunk = get_chunk(a, save.saver);
			j = 0;
		}
		i = 0;
		while (i < save.k)
		{
			if ((*a)->content == chunk[i])
			{
				pb(b, a);
				j++;
				break ;
			}
			i++;
		}
		if (i == save.k)
			ra(*a);
	}
}

void	bigsort(t_stack **a, t_stack **b, int size)
{
	int		*chunk;
	int		j;
	t_stack	save;

	j = 0;
	save.saver = size;
	if (size <= 100)
		save.k = save.saver / 5;
	if (size <= 500)
		save.k = save.saver / 11;
	chunk = get_chunk(a, save.saver);
	norm(a, b, chunk, save);
	pb_a(a, b);
}
