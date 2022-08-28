/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commande2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 15:34:47 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/01/11 20:05:29 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_pile *p)
{
	int	tmp;

	tmp = p->data[0];
	ft_decaldown_a(p);
	p->data[p->len.a - 1] = tmp;
	ft_putstr_fd("ra\n", 1);
}

void	rb(t_pile *p)
{
	int	tmp;

	tmp = p->datb[0];
	ft_decaldown_b(p);
	p->datb[p->len.b - 1] = tmp;
	ft_putstr_fd("rb\n", 1);
}

void	rr(t_pile *p)
{
	ra(p);
	rb(p);
	ft_putstr_fd("rr\n", 1);
}

void	rra(t_pile *p)
{
	int	tmp;

	tmp = p->data[p->len.a - 1];
	ft_decalup_a(p);
	p->data[0] = tmp;
	ft_putstr_fd("rra\n", 1);
}

void	rrb(t_pile *p)
{
	int	tmp;

	tmp = p->datb[p->len.b - 1];
	ft_decalup_b(p);
	p->datb[0] = tmp;
	ft_putstr_fd("rrb\n", 1);
}
