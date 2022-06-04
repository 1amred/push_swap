/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamellal <mamellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:44:55 by mamellal          #+#    #+#             */
/*   Updated: 2022/03/30 11:10:22 by mamellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_errors(t_stack **head)
{
	t_stack	*saver;
	t_stack	*tmp;

	saver = *head;
	while (saver)
	{
		tmp = saver->next;
		while (tmp)
		{
			if (tmp->content == saver->content)
			{
				write(2, "error\n", 7);
				exit(0);
			}
			tmp = tmp->next;
		}
		saver = saver->next;
	}
}

int	ft_lstsize(t_stack *stack)
{
	t_stack	*current;
	int		i;

	i = 0;
	current = stack;
	while (current != 0)
	{
		i++;
		current = current->next;
	}
	return (i);
}

void	refresh(t_stack **top, t_stack **middle, t_stack **bottom, t_stack **a)
{
	*top = *a;
	*middle = (*top)->next;
	*bottom = (*middle)->next;
}

int	check(int nb, int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (nb == tab[i])
			return (1);
		i++;
	}
	return (0);
}

int	get_min_chunk(t_stack **a, int size, int *chunk, int size_c)
{
	t_stack	*current;
	int		i;
	int		min;

	min = 2147483647;
	i = 0;
	current = *a;
	while (current && i < size)
	{
		if (current->content < min && !check(current->content, chunk, size_c))
			min = current->content;
		current = current->next;
		i++;
	}
	return (min);
}
