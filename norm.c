/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   norm.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamellal <mamellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:42:01 by mamellal          #+#    #+#             */
/*   Updated: 2022/03/30 11:15:19 by mamellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	fornorm(t_check	**a, t_check **b, char *str)
{
	if (ft_strcmp(str, "pb\n"))
		pbl(b, a);
	else if (ft_strcmp(str, "pa\n"))
		pbl(a, b);
	else if (ft_strcmp(str, "rrr\n"))
		rrr(a, b);
	else if (ft_strcmp(str, "rr\n"))
		rr(a, b);
	else
	{
		write(1, "Error\n", 6);
		exit(0);
	}
}
