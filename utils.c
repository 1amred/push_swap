/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamellal <mamellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 20:41:09 by mamellal          #+#    #+#             */
/*   Updated: 2022/03/02 15:55:34 by mamellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void    bigsort(t_stack **a, t_stack **b)
{
    int i;
    i = 0;
    int size = ft_lstsize(*a);

    while(i < size)
    {
        ps(b,a,"pb");
        i++;
    }
    int ok = ft_lstsize(*b);
    i = 0;
    while(i < ok / 2)
    {
        ps(a,b,"pa");
        if((*a)->next->content > (*a)->content && )
        
        i++;
    }
}