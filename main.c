/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 16:43:55 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/01/17 16:44:32 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	parthing(t_pile *p, int argc, char **argv)
{
	int				i;
	long long int	tmp;

	p->size = argc - 1;
	p->len.a = p->size;
	p->len.b = 0;
	p->data = malloc(sizeof(int) * p->size);
	p->datb = malloc(sizeof(int) * p->size);
	if (!p->data || !p->datb)
		return (0);
	i = 0;
	while (++i < argc)
	{
		if (checkdigit(argv[i]) == 0 || checkdoublon(argc, argv) == 0 \
		|| ft_strlen(argv[i]) > 11)
			return (0);
		tmp = ft_atoi(argv[i]);
		if (tmp < -2147483648 || tmp > 2147483647)
			return (0);
		p->data[i - 1] = tmp;
	}
	if (ft_tchiong(p) == 0)
		return (0);
	return (1);
}

int	ft_range(t_pile *p)
{
	if (p->size <= 100)
		return (4);
	if (p->size <= 500)
		return (10);
	return (50);
}

static void	push_swap(t_pile *p)
{
	int		x;
	int		i;
	float	step;

	x = 0;
	step = (float)p->size / (float)ft_range(p);
	i = 0;
	while (i < ft_range(p))
	{
		fetch_range(p, i * step, (i + 1) * step);
		sortb(p, i * step, (i + 1) * step);
		i++;
	}
}

static void	delete_stacks(t_pile *p)
{
	free(p->data);
	free(p->datb);
}

int	main(int argc, char **argv)
{
	t_pile	p;

	if (argc < 2)
		return (0);
	if (parthing(&p, argc, argv) == 0)
	{
		delete_stacks(&p);
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	if (check(&p) == 0)
	{
		delete_stacks(&p);
		return (0);
	}
	if (p.size <= 3)
		three(&p, 0);
	else if (p.size > 3 && p.size <= 6)
		minialgo(&p);
	else
		push_swap(&p);
	delete_stacks(&p);
	return (0);
}
