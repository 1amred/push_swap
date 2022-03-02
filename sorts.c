/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamellal <mamellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:44:55 by mamellal          #+#    #+#             */
/*   Updated: 2022/03/02 15:22:49 by mamellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "push_swap.h"



int ft_lstsize(t_stack *stack)
{
    t_stack *current;
    int i;

    i = 0;
    current = stack;
    while(current != 0)
    {   
        i++;
        current = current->next;
    }

    return (i);
}

void print_stack(t_stack * head,char c,char *pos,int iteration)
{
    t_stack *current;
    int i;

    printf("t_stack %c in %s iteration %i : ",c,pos,iteration);
    i = 0;
    current = head;
    while(current != 0)
    {
        printf("%i ",current->content);
        current = current->next;
        i++;
    }
     printf("\n");
}

void refresh(t_stack **top,t_stack **middle,t_stack ** bottom,t_stack ** a)
{
    *top = *a;
    *middle = (*top)->next;
    *bottom = (*middle)->next;
}


int get_min(t_stack **a,int size)
{
    
    int i;
    t_stack *current;
    int minPos;
    int min;
 
    current = *a;   
    minPos = 0;
    if(current)
        min = current->content;
    i = 0;
    while(i < size)
    {
        if(current->content < min)
        {
             min = current->content;
             minPos = i;
        }
        current = current->next;
        i++;
    }
    return (minPos);
}

int check_sorted(t_stack *a)
{

    // current = a->next;;
    while(a->next != 0)
    {
        if(a->next->content < a->content)
            return (0);
        a = a->next;
    }
    return (1);
}


void s_t(t_stack **a)
{
    t_stack *top;
    t_stack *bottom;
    int i;
    t_stack *middle;

   refresh(&top,&middle,&bottom,a);
    i = 0;
    while(i < 3 && !check_sorted(*a))
    {

          if( bottom->content < top->content && middle->content < bottom->content)
             ra(*a);
          else if(top->content > middle->content)
            sa(*a);
          else if(middle->content > bottom->content)
           rra(a);
          refresh(&top,&middle,&bottom,a);
          i++;
    }
}
