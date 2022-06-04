/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   saver_fri4nd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamellal <mamellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 16:03:18 by mamellal          #+#    #+#             */
/*   Updated: 2022/04/02 14:04:09 by mamellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putstr(char *s)
{
	int	x;

	x = 0;
	if (!s)
		return ;
	while (s[x])
	{
		write(1, &s[x], 1);
		x++;
	}
}

void	ft_error(char *str)
{
	ft_putstr(str);
	exit (0);
}

void	check_limits(unsigned long int n, int sign)
{
	if (n > 2147483647 && sign == 1)
	{
		write(1, "Error\n", 6);
		exit(0);
	}
	if (n > 2147483648 && sign == -1)
	{
		write(1, "Error\n", 6);
		exit (0);
	}
}

int	ft_atoi(const char *str)
{
	int					i;
	int					sign;
	unsigned long int	n;

	sign = 1;
	n = 0;
	i = 0;
	if (!str[i])
		ft_error("Error\n");
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+' )
	{
		if (str[i] == '-')
		sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + (str[i] - '0');
			i++;
	}
	check_limits(n, sign);
	return (n * sign);
}
