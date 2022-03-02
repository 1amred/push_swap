/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamellal <mamellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:44:16 by mamellal          #+#    #+#             */
/*   Updated: 2022/03/02 15:27:35 by mamellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

# include<unistd.h>
# include<stdlib.h>
# include <stdio.h>

typedef struct s_stack
{
	int			content;
	struct s_stack	*next;
    struct s_stack	*previous;
}	t_stack;

 static int instruction;
 #define GREEN   "\033[32m" 
 #define RESET   "\033[0m"
 #define RED     "\033[31m" 


void sa(t_stack * head);
void ps(t_stack **stack1,t_stack **stack2,char *op);

//void action_pb(stack **b,stack *a);

void ra(t_stack *head);
void rra(t_stack **head);
void sb(t_stack * head);

// libft
t_stack *get_last(t_stack *head);

char    *ft_itoa(int n);

void debug(int i,char *name,int value);
void    bigsort(t_stack **a, t_stack **b);

// weak brain

int get_min(t_stack **a,int size);
int ft_lstsize(t_stack *stack);
void print_stack(t_stack * head,char c,char *pos,int iteration);
void s_t(t_stack **a);
void s_f(t_stack **a,t_stack **b);
void five(t_stack **a,t_stack **b);
int check_sorted(t_stack *a);
void cent(t_stack **a,t_stack **b);

int first_part(t_stack **a,int min,int size);
void last_part(t_stack **a,int min,int size);

#endif