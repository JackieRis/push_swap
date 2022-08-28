/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:48:24 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/01/12 01:19:20 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	checkdigit(char *s)
{
	int	i;

	i = -1;
	if (s[0] == '-')
		i++;
	while (++i < (int )ft_strlen(s))
	{
		if (ft_isdigit(s[i]) == 0)
			return (0);
	}
	return (1);
}

int	checkdoublon(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		if (j >= argc)
			return (1);
		while (j < argc)
		{
			if (ft_strncmp(argv[i], argv[j], ft_strlen(argv[i])) == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_decalup_a(t_pile *p)
{
	int	i;

	i = p->len.a - 2;
	while (i >= 0)
	{
		p->data[i + 1] = p->data[i];
		i--;
	}
}

void	ft_decalup_b(t_pile *p)
{
	int	i;

	i = p->len.b - 2;
	while (i >= 0)
	{
		p->datb[i + 1] = p->datb[i];
		i--;
	}
}
