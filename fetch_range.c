/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fetch_range.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 18:49:57 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/01/11 20:16:15 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	dist(int pos, int len)
{
	int	newdist;

	newdist = pos;
	if (pos >= len / 2)
		newdist = len - pos + 1;
	return (newdist);
}

static int	closest(t_pile *p, int start, int end)
{
	int	i;
	int	distance;
	int	index;
	int	tmp;

	i = 0;
	index = -1;
	distance = p->len.a;
	while (i < end - start)
	{
		tmp = dist(findx(p->data, p->len.a, i + start), p->len.a);
		if (tmp < distance && tmp >= 0)
		{
			distance = tmp;
			index = i + start;
		}
		i++;
	}
	return (index);
}

static void	rewind_a(t_pile *p, int x)
{
	int	pos;

	pos = findx(p->data, p->len.a, x);
	if (pos < 0 || pos == p->len.a - 1)
		return ;
	if (pos < p->len.a / 2)
		rotate(p, pos + 1, ra);
	else
		rotate(p, p->len.a - pos - 1, rra);
}

void	fetch_range(t_pile *p, int start, int end)
{
	int	i;
	int	x;

	i = start;
	while (i < end)
	{
		x = closest(p, start, end);
		fetchx(p, x);
		i++;
	}
	if (start > 0)
		rewind_a(p, start - 1);
}
