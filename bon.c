/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bon.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamellal <mamellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 00:11:07 by mamellal          #+#    #+#             */
/*   Updated: 2022/03/30 11:09:13 by mamellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(t_check **a, t_check **b)
{
	ral(*a);
	ral(*b);
}

void	rrr(t_check **a, t_check **b)
{
	rwra(a);
	rwra(b);
}

int	checksorted(t_check *a)
{
	if (!a)
		return (0);
	while (a->nexxt != 0)
	{
		if (a->nexxt->nb < a->nb)
			return (0);
		a = a->nexxt;
	}
	return (1);
}

void	checkerrors(t_check **head)
{
	t_check	*saver;
	t_check	*tmp;

	saver = *head;
	while (saver)
	{
		tmp = saver->nexxt;
		while (tmp)
		{
			if (tmp->nb == saver->nb)
			{
				write(2, "error\n", 7);
				exit(0);
			}
			tmp = tmp->nexxt;
		}
		saver = saver->nexxt;
	}
}

t_check	*fill_stack(int size, char **numbers, char stack)
{
	int		i;
	t_check	*current;
	t_check	*head;
	t_check	*prev;

	prev = 0;
	head = 0;
	i = 0;
	while (++i < size)
	{
		current = malloc(sizeof(t_stack));
		if (stack == 'a')
			current->nb = ft_atoi(numbers[i]);
		current->nexxt = 0;
		current->previious = 0;
		if (head == 0)
			head = current;
		else
		{
			prev->nexxt = current;
			current->previious = prev;
		}
		prev = current;
	}
	return (head);
}
