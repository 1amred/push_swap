/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_actions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamellal <mamellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:44:25 by mamellal          #+#    #+#             */
/*   Updated: 2022/03/27 00:45:06 by mamellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	sa(t_stack	*head)
{
	t_stack	*current;
	int		swap;

	current = head;
	if (current != 0)
	{
		if (current->next != 0)
		{
			swap = current->content;
			current->content = current->next->content;
			current->next->content = swap;
			write (1, "sa\n", 3);
		}
	}
}

void	pb(t_stack **stack1, t_stack **stack2)
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
	write (1, "pb\n", 3);
}

void	ra(t_stack	*head)
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
	write(1, "ra\n", 3);
}

void	rra(t_stack	**head)
{
	t_stack	*last;
	int		i;
	t_stack	*chead;	

	i = 0;
	chead = *head;
	last = *head;
	if (!(*head))
		return ;
	while (last->next != 0)
	{
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
		write (1, "rra\n", 4);
	}
}
