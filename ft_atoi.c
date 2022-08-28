/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 05:42:11 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/01/12 01:35:14 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long long int	ft_atoi(const char *str)
{
	long long int	i;
	long long int	signe;
	long long int	r;

	i = 0;
	signe = 1;
	r = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || \
				str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		signe = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	if (!(str[i] > 47 && str[i] < 58))
		return (0);
	while (str[i] > 47 && str[i] < 58)
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	return (r * signe);
}
