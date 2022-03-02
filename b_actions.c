/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_actions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamellal <mamellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:44:37 by mamellal          #+#    #+#             */
/*   Updated: 2022/03/01 18:48:00 by mamellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sb(t_stack * head)
{
    t_stack *current;
    int swap;

        
    current = head;
    if(current != 0)
    {
        if(current->next != 0)
        {
            swap = current->content;
            current->content = current->next->content;
            current->next->content = swap;
            printf("sa\n");    
        }
    }
}

// void ps(t_stack **stack1,t_stack **stack2,char *op)
// {
//     t_stack *head1;
//     t_stack *head2;
    
        
//     head2 = *stack2;
//     head1 = *stack1;
//     if(head2 != 0 && head1 != 0)
//     {
//          *stack2 = head2->next;
//         head2->next = head1;
//         head1->previous = head2;
       
//         *stack1 = head2;
       
//     }
//     if(head1 == 0 && head2 != 0)
//     {
//         *stack2 = head2->next;
//         *stack1 = head2;
//         head1 = *stack1;
//         head1->next = 0;
//     }
//     printf("%s\n",op);    
// }

void rb(t_stack *head)
{
    
    t_stack *current;
    int swap;
    
         
    current = head;
    while(current != NULL)
    {
         if(current->next != 0)
         {
             swap = current->next->content;
             current->next->content = current->content;
             current->content = swap;
         }
         current = current->next;
    }
    printf("ra\n");
}

void rrb(t_stack **head)
{
    t_stack *last;
    int i;
    t_stack *chead;

          
    i = 0;
    chead = *head;
    last = *head;

    while(last->next != 0)
    {
         last = last->next;
         i++;
    }
    if(i > 0)
    {
        chead->previous = last;
        last->previous->next = 0;
        last->next = chead;
        *head = last;
        last->previous = 0;
        printf("rra\n");
    }  
}
