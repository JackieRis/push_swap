/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 05:43:57 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/01/07 13:31:17 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t			i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (src[count] != '\0')
		count++;
	if (n <= 0)
		return (count);
	while (src[i] != '\0' && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (count);
}
