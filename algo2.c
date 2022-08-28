/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 16:12:35 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/01/11 19:33:33 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check(t_pile *p)
{
	int	i;

	i = 0;
	while (i < p->len.a - 1)
	{
		if (p->data[i] > p->data[i + 1])
			return (1);
		i++;
	}
	return (0);
}

void	three(t_pile *p, int x)
{
	if (check(p) == 0)
		return ;
	if (p->data[0] == 2 + x && p->data[1] == 1 + x)
	{
		sa(p);
		rra(p);
	}
	else if (p->data[0] == 2 + x && p->data[1] == 0 + x)
		ra(p);
	else if (p->data[0] == 1 + x && p->data[1] == 2 + x)
		rra(p);
	else if (p->data[0] == 1 + x && p->data[1] == 0 + x)
		sa(p);
	else
	{
		rra(p);
		sa(p);
	}
}

void	minialgo(t_pile *p)
{
	int	i;

	i = 0;
	while (i < p->size - 3)
		fetchx(p, i++);
	three(p, p->size - 3);
	while (p->len.b > 0)
		pa(p);
}
