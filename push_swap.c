/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamellal <mamellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:44:04 by mamellal          #+#    #+#             */
/*   Updated: 2022/06/04 13:11:26 by mamellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*fill_t_stack(int size, char **numbers, char stack)
{
	int		i;
	t_stack	*current;
	t_stack	*head;
	t_stack	*prev;

	prev = 0;
	head = 0;
	i = 0;
	while (++i < size)
	{
		current = malloc(sizeof(t_stack));
		if (stack == 'a')
			current->content = ft_atoi(numbers[i]);
		current->next = 0;
		current->previous = 0;
		if (head == 0)
			head = current;
		else
		{
			prev->next = current;
			current->previous = prev;
		}
		prev = current;
	}
	return (head);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	int		size;

	if (ac < 2)
		exit(1);
	check_error(av);
	a = fill_t_stack(ac, av, 'a');
	b = 0;
	check_errors(&a);
	if (check_sorted(a))
		exit(0);
	size = ft_lstsize(a);
	if (size <= 3)
		s_t(&a, size);
	else if (size >= 4 && size <= 10)
		fourth(&a, &b, size);
	else if (size <= 100 || size <= 500)
		bigsort(&a, &b, size);
	else
		fourth(&a, &b, size);
}
