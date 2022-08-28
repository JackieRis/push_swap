/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 15:10:24 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/01/12 01:21:50 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_decaldown_a(t_pile *p)
{
	int	i;

	i = 0;
	while (i < p->len.a - 1)
	{
		p->data[i] = p->data[i + 1];
		i++;
	}
}

void	ft_decaldown_b(t_pile *p)
{
	int	i;

	i = 0;
	while (i < p->len.b - 1)
	{
		p->datb[i] = p->datb[i + 1];
		i++;
	}
}

void	rrr(t_pile *p)
{
	rra(p);
	rrb(p);
	ft_putstr_fd("rrr\n", 1);
}

int	ft_tri(t_pile *p)
{
	int	i;

	i = -1;
	while (++i < p->len.a - 1)
	{
		if (p->data[i] > p->data[i + 1] || p->len.b != 0)
			return (0);
	}
	return (1);
}

int	ft_tchiong(t_pile *p)
{
	int	i;
	int	j;

	p->tchiong = malloc(sizeof(int) * p->size);
	if (!p->tchiong)
		return (0);
	ft_memcpy(p->tchiong, p->data, p->size * sizeof(int));
	ft_sort_int_tab(p->tchiong, p->size);
	i = -1;
	while (++i < p->size)
	{
		j = -1;
		while (++j < p->size)
		{
			if (p->tchiong[j] == p->data[i])
			{
				p->data[i] = j;
				break ;
			}
		}
	}
	free(p->tchiong);
	return (1);
}
