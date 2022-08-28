/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 16:44:17 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/01/12 01:37:12 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_vec
{
	int	a;
	int	b;
}	t_vec;

typedef struct s_pile
{
	int		*tchiong;
	int		*data;
	int		*datb;
	int		size;
	t_vec	len;
}	t_pile;

long long int		ft_atoi(const char *str);
int					ft_isdigit(int c);
char				**ft_split(char const *s, char c);
int					checkdigit(char *s);
size_t				ft_strlen(const char *str);
void				*ft_calloc(size_t count, size_t size);
void				ft_bzero(void *s, size_t n);
void				*ft_memset(void *s, int c, size_t n);
size_t				ft_strlcpy(char *dest, const char *src, size_t n);
void				ft_putstr_fd(char *s, int fd);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					checkdoublon(int argc, char **argv);
void				sa(t_pile *p);
void				sb(t_pile *p);
void				ss(t_pile *p);
void				ft_decalup_a(t_pile *p);
void				ft_decalup_b(t_pile *p);
void				ft_decaldown_b(t_pile *p);
void				ft_decaldown_a(t_pile *p);
void				pb(t_pile *p);
void				pa(t_pile *p);
void				ra(t_pile *p);
void				rb(t_pile *p);
void				rr(t_pile *p);
void				rra(t_pile *p);
void				rrb(t_pile *p);
void				rrr(t_pile *p);
void				chunk(t_pile *p);
int					ft_tri(t_pile *p);
void				ft_sort_int_tab(int *tab, int size);
void				*ft_memcpy(void *dst, const void *src, size_t n);
int					ft_tchiong(t_pile *p);
int					findx(int *p, int size, int x);
void				fetchx(t_pile *p, int x);
void				fetch_range(t_pile *p, int start, int end);
int					ft_range(t_pile *p);
void				sortb(t_pile *p, int start, int end);
void				rotate(t_pile *p, int len, void (*rot)(t_pile *));
void				three(t_pile *p, int x);
int					check(t_pile *p);
void				minialgo(t_pile *p);

#endif
