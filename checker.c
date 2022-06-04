/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamellal <mamellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:42:12 by mamellal          #+#    #+#             */
/*   Updated: 2022/03/31 22:07:39 by mamellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sal(t_check	*head)
{
	t_check	*current;
	int		swap;

	current = head;
	if (current != 0)
	{
		if (current->nexxt != 0)
		{
			swap = current->nb;
			current->nb = current->nexxt->nb;
			current->nexxt->nb = swap;
		}
	}
}

void	pbl(t_check **stack1, t_check **stack2)
{
	t_check	*head1;
	t_check	*head2;

	head2 = *stack2;
	head1 = *stack1;
	if (head2 != 0 && head1 != 0)
	{
		*stack2 = head2->nexxt;
		head2->nexxt = head1;
		head1->previious = head2;
		*stack1 = head2;
	}
	if (head1 == 0 && head2 != 0)
	{
		*stack2 = head2->nexxt;
		*stack1 = head2;
		head1 = *stack1;
		head1->nexxt = 0;
	}
}

void	ral(t_check	*head)
{
	t_check	*current;
	int		swap;

	current = head;
	while (current != NULL)
	{
		if (current->nexxt != 0)
		{
			swap = current->nexxt->nb;
			current->nexxt->nb = current->nb;
			current->nb = swap;
		}
		current = current->nexxt;
	}
}

void	read_input(t_check **a, t_check **b)
{
	char	*str;

	str = get_next_line(0);
	while (str)
	{
		if (ft_strcmp(str, "sa\n"))
			sal(*a);
		else if (ft_strcmp(str, "sb\n"))
			sal(*b);
		else if (ft_strcmp(str, "ra\n"))
			ral(*a);
		else if (ft_strcmp(str, "rb\n"))
			ral(*b);
		else if (ft_strcmp(str, "rra\n"))
			rwra(a);
		else if (ft_strcmp(str, "rrb\n"))
			rwra(b);
		else
			fornorm(a, b, str);
		free(str);
		str = get_next_line(0);
	}
}

int	main(int ac, char **av)
{
	t_check	*a;
	t_check	*b;

	check_error(av);
	a = fill_stack(ac, av, 'a');
	b = 0;
	checkerrors(&a);
	read_input(&a, &b);
	if (checksorted(a) && !b)
	{
		write(1, "OK\n", 3);
		exit (0);
	}
	else
		write(1, "KO\n", 3);
}
