/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 16:24:34 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/01/11 19:47:25 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_pile *p, int len, void (*rot)(t_pile *))
{
	while (len--)
		(*rot)(p);
}

int	findx(int *p, int size, int x)
{
	int	i;

	i = -1;
	while (++i < size)
		if (p[i] == x)
			return (i);
	return (-1);
}

void	fetchx(t_pile *p, int x)
{
	int	i;

	i = findx(p->data, p->len.a, x);
	if (i == -1)
		return ;
	if (i <= p->len.a / 2)
		rotate(p, i, ra);
	else
		rotate(p, p->len.a - i, rra);
	pb(p);
}

void	sortb(t_pile *p, int start, int end)
{
	int	i;

	while (start < end)
	{
		i = findx(p->datb, p->len.b, start++);
		if (i < 0)
			continue ;
		if (i <= p->len.b / 2)
			rotate(p, i, rb);
		else
			rotate(p, p->len.b - i, rrb);
		pa(p);
		ra(p);
	}
}
