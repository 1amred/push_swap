/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamellal <mamellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 02:27:20 by mamellal          #+#    #+#             */
/*   Updated: 2022/03/28 03:26:56 by mamellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	reval_content(t_stack **head, int pos)
{
	t_stack	*current;
	int		i;

	current = *head;
	i = 0;
	while (current != 0)
	{
		if (pos == i)
			return (current->content);
		i++;
		current = current->next;
	}
	return (i);
}

int	*get_chunk(t_stack	**a, int size)
{
	int			*chunk;
	int			min;
	int			k;
	int			i;

	if (size <= 100)
		k = size / 5;
	if (size <= 500)
		k = size / 11;
	chunk = malloc (sizeof(int) * k);
	min = reval_content(a, get_min(a, size));
	chunk[0] = min;
	i = 0;
	while (i++ < k)
	{
		chunk[i] = get_min_chunk(a, size, chunk, i);
	}
	free (chunk);
	return (chunk);
}
