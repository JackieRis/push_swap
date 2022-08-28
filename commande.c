/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commande.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 16:46:23 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/01/11 16:09:35 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_pile *p)
{
	int	tmp;

	tmp = 0;
	tmp = p->data[0];
	p->data[0] = p->data[1];
	p->data[1] = tmp;
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_pile *p)
{
	int	tmp;

	tmp = 0;
	tmp = p->datb[0];
	p->datb[0] = p->datb[1];
	p->datb[1] = tmp;
	ft_putstr_fd("sb\n", 1);
}

void	ss(t_pile *p)
{
	int	tmp;

	tmp = 0;
	tmp = p->data[0];
	p->data[0] = p->data[1];
	p->data[1] = tmp;
	tmp = p->datb[0];
	p->datb[0] = p->datb[1];
	p->datb[1] = tmp;
	ft_putstr_fd("ss\n", 1);
}

void	pa(t_pile *p)
{
	int	tmp;

	tmp = p->datb[0];
	ft_decaldown_b(p);
	p->len.a += 1;
	p->len.b -= 1;
	ft_decalup_a(p);
	p->data[0] = tmp;
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_pile *p)
{
	int	tmp;

	tmp = p->data[0];
	ft_decaldown_a(p);
	p->len.b += 1;
	p->len.a -= 1;
	ft_decalup_b(p);
	p->datb[0] = tmp;
	ft_putstr_fd("pb\n", 1);
}
