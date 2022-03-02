/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamellal <mamellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:44:04 by mamellal          #+#    #+#             */
/*   Updated: 2022/03/02 14:32:50 by mamellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

t_stack *fill_t_stack(int size,char **numbers,char stack)
{
     int i;
     t_stack *current;
     t_stack *head;
     t_stack *prev;
    
     prev = 0;
     head = 0;
     i = 1;
     while(i < size)
     {
         current = malloc(sizeof(t_stack));
         if(stack == 'a')
             current->content = atoi(numbers[i]);
        else
             current->content = atoi(numbers[i]) + 4;
         current->next = 0;
         current->previous = 0;
         if(head == 0)
            head = current;
        else
        {
            prev->next = current;
            current->previous = prev;     
        }
         prev = current;   
         i++;
     }
     return (head);
}





int main(int ac,char **av)
{
    t_stack *a;
    t_stack *b;

  
    int sizea;
   
    

    a = fill_t_stack(ac,av,'a');
    b = 0;
    sizea = ft_lstsize(a);

    // if(sizea == 3)
    //     s_t(&a,0);
    // if(sizea >= 4 && sizea < 100)
    //     s_f(&a,&b);

    bigsort(&a,&b);


    //printf("Number of instructions is %i\n",instruction);
    
    print_stack(a,'a',"main",1);
     print_stack(b,'b',"main",1);
     
     
    if(check_sorted(a))
        printf(GREEN "OK :)\n" RESET);
    else
        printf(RED "KO !\n" RESET);

    

  
  
   
  

}
