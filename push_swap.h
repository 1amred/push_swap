/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamellal <mamellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:44:16 by mamellal          #+#    #+#             */
/*   Updated: 2022/03/29 18:57:59 by mamellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_stack
{
	int				content;
	int				saver;
	int				k;
	struct s_stack	*next;
	struct s_stack	*previous;
}	t_stack;

typedef struct s_check
{
	int				nb;
	struct s_check	*nexxt;
	struct s_check	*previious;
}	t_check;

/*
# define GREEN   "\033[32m" 
# define RESET   "\033[0m"
# define RED     "\033[31m"
*/

void	refresh(t_stack **top, t_stack **middle, t_stack **bottom, t_stack **a);
void	sa(t_stack *head);
void	pb(t_stack **stack1, t_stack **stack2);
void	pa(t_stack **stack1, t_stack **stack2);
void	rb(t_stack	*head);
void	rrb(t_stack	**head);
void	rwra(t_check**head);
void	ra(t_stack *head);
void	rra(t_stack **head);
int		*get_chunk(t_stack	**a, int size);
int		ft_atoi(const char *str);
void	bigsort(t_stack **a, t_stack **b, int size);
void	check_errors(t_stack **head);
int		get_min(t_stack **a, int size);
int		get_min_chunk(t_stack **a, int size, int *chunk, int size_c);
int		get_max(t_stack	**head, int size);
int		ft_lstsize(t_stack *stack);
void	s_t(t_stack **a, int size);
void	fourth(t_stack **a, t_stack **b, int size);
int		check_sorted(t_stack *a);
void	check_error(char **av);
char	*get_next_line(int fd);
int		first_part(t_stack **a, int min, int size);
void	last_part(t_stack **a, int min, int size);
int		ft_strcmp(char *s, char *d);
t_check	*fill_stack(int size, char **numbers, char stack);
void	checkerrors(t_check **head);
void	check_error(char **av);
int		checksorted(t_check *a);
int		ft_atoi(const char *str);
void	fornorm(t_check	**a, t_check **b, char *str);
void	rr(t_check **a, t_check **b);
void	rrr(t_check **a, t_check **b);
void	ral(t_check	*head);
void	pbl(t_check **stack1, t_check **stack2);

#endif
