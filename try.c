/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   try.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamellal <mamellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 01:11:47 by mamellal          #+#    #+#             */
/*   Updated: 2022/03/30 11:10:44 by mamellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isalpha(char *ch)
{
	int	i;

	i = 0;
	while (ch[i])
	{
		if ((ch[i] >= 'a' && ch[i] <= 'z') || (ch[i] >= 'A' && ch[i] <= 'Z'))
			return (1);
		i++;
	}
	return (0);
}

int	ft_isascii(char *a)
{
	int	i;

	i = 0;
	if (a[i] == '-' || a[i] == '+')
	{
		i++;
		if (!a[i])
			return (1);
	}
	while (a[i])
	{
		if (!(a[i] >= 48 && a[i] <= 57))
			return (1);
		i++;
	}
	return (0);
}

void	check_error(char **av)
{
	int	i;

	i = 1;
	while (av[i])
	{
		if (ft_isalpha(av[i]) || ft_isascii(av[i]))
		{
			write(1, "error\n", 7);
			exit(0);
		}
		i++;
	}
}
