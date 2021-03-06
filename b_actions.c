/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_actions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamellal <mamellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:44:37 by mamellal          #+#    #+#             */
/*   Updated: 2022/03/29 23:26:31 by mamellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack	**stack1, t_stack	**stack2)
{
	t_stack	*head1;
	t_stack	*head2;

	head2 = *stack2;
	head1 = *stack1;
	if (head2 != 0 && head1 != 0)
	{
		*stack2 = head2->next;
		head2->next = head1;
		head1->previous = head2;
		*stack1 = head2;
	}
	if (head1 == 0 && head2 != 0)
	{
		*stack2 = head2->next;
		*stack1 = head2;
		head1 = *stack1;
		head1->next = 0;
	}
	write (1, "pa\n", 3);
}

void	rb(t_stack	*head)
{
	t_stack	*current;
	int		swap;

	current = head;
	while (current != NULL)
	{
		if (current->next != 0)
		{
			swap = current->next->content;
			current->next->content = current->content;
			current->content = swap;
		}
		current = current->next;
	}
	write (1, "rb\n", 3);
}

void	rrb(t_stack	**head)
{
	t_stack	*last;
	int		i;
	t_stack	*chead;

	i = 0;
	chead = *head;
	last = *head;
	while (last->next != 0)
	{
		if (last->next == 0)
			break ;
		last = last->next;
		i++;
	}
	if (i > 0)
	{
		chead->previous = last;
		last->previous->next = 0;
		last->next = chead;
		*head = last;
		last->previous = 0;
		write (1, "rrb\n", 4);
	}
}

int	first_part(t_stack **a, int min, int size)
{
	int	pair;
	int	i;

	pair = size % 2;
	if ((min <= (size / 2) && pair == 1) || (min < (size / 2) && pair == 0))
	{
		i = 0;
		while (i < min)
		{
			ra (*a);
			i++;
		}
	}
	else
		return (0);
	return (1);
}
