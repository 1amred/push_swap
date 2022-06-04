/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamellal <mamellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 20:02:18 by mamellal          #+#    #+#             */
/*   Updated: 2022/03/30 10:55:10 by mamellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rwra(t_check	**head)
{
	t_check	*last;
	int		i;
	t_check	*chead;	

	i = 0;
	chead = *head;
	last = *head;
	if (!(*head))
		return ;
	while (last->nexxt != 0)
	{
		last = last->nexxt;
		i++;
	}
	if (i > 0)
	{
		chead->previious = last;
		last->previious->nexxt = 0;
		last->nexxt = chead;
		*head = last;
		last->previious = 0;
	}
}

int	ft_strlen(const char *str)
{
	int	b;

	b = 0;
	if (!str)
		return (0);
	while (str[b])
		b++;
	return (b);
}

int	ft_strcmp(char *s, char *d)
{
	int	i;

	i = 0;
	if (!s || !d)
		return (0);
	while (s[i] && d[i] && s[i] == d[i])
		i++;
	if (i == ft_strlen(s) && ft_strlen(s) == ft_strlen(d))
		return (1);
	return (0);
}

char	*ft_strdup(const char *src)
{
	int		a;
	char	*b;

	a = 0;
	b = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (b == 0)
		return (0);
	while (src [a])
	{
		b[a] = src[a];
		a++;
	}
	b[a] = 0;
	return (b);
}

char	*get_next_line(int fd)
{
	char	line[10];
	char	c;
	int		i;

	i = -1;
	while (++i < 10)
		line[i] = 0;
	i = 0;
	while (read(fd, &c, 1) > 0)
	{
		line[i++] = c;
		if (c == '\n')
			break ;
	}
	if (line[0] == 0)
		return (NULL);
	return (ft_strdup(line));
}
