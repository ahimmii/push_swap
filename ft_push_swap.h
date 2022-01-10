/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahimmi <ahimmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:13:52 by ahimmi            #+#    #+#             */
/*   Updated: 2022/01/07 01:23:30 by ahimmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include "unistd.h"
# include "stdio.h"
# include "stdlib.h"

struct s_tab_count
{
	int		*a;
	int		*b;
	int		a_v;
	int		b_v;
	int		remain_a;
	int		remain_b;
	int		c_a;
	int		pivot_i;
	int		instructions;
	int		passed_instructions;
	int		passed_pivot;
	int		new_pivot;
	int		test;
	int		size_tab;
	int		*static_tab_a;
	int		*static_a;
	int		stack_a;
	char	*tmp;
};

int			ft_atoi(const char *str);
void		ft_swap(int *a, int *b);
void		ft_putstr_fd(char *s, int fd);
char		*ft_strdup(char *str);
int			ft_strlen(char *str);
char		*get_next_line(int fd);

char		*ft_strjoin(char *s1, char *s2);
int			ft_strcmp(char *s1, char *s2);
int			is_integer(int ac, char *av[]);
int			is_duplicate(int tab_count, int *tab);
int			*ft_tab_malloc(int ac, char *av[]);
// insctructions

void		ft_sa(int *first_a, int *last_a, struct s_tab_count *data);
void		ft_sb(int *first_b, int *last_b, struct s_tab_count *data);
void		ft_pb(int *last_a, int *last_b, struct s_tab_count *data);
void		ft_pa(int *last_b, int *last_a, struct s_tab_count *data);
void		ft_ra(struct s_tab_count *data);
void		ft_rra(struct s_tab_count *data);
void		ft_rb(struct s_tab_count *data);
void		ft_rrb(struct s_tab_count *data);

int			ft_min_nbr(struct s_tab_count *data);
int			ft_min_pos(struct s_tab_count *data);
int			ft_proximity(int min_pos, struct s_tab_count *data);
int			ft_pick_pivot(struct s_tab_count *data);
void		ft_send_to_b(struct s_tab_count *data, int pivot);
void		ft_send_to_a(struct s_tab_count *data);
char		**ft_split(char const *s, char c);
int			ft_max_nbr(struct s_tab_count *data);
int			ft_size_tab(int ac, char *av[]);

int			ft_next_min(struct s_tab_count *data, int pivot);
int			ft_mid_pivot(struct s_tab_count *data);
int			ft_max_pos(struct s_tab_count *data);
int			ft_proximity_b(int max_pos, struct s_tab_count *data);

void		ft_stack_logic(struct s_tab_count *data);
void		ft_stack_of_2(struct s_tab_count *data);
void		ft_stack_of_3(struct s_tab_count *data, int remaining);
void		ft_stack_of_4(struct s_tab_count *data);
void		ft_stack_of_5(struct s_tab_count *data);
void		ft_stack_of_3_b(struct s_tab_count *data, int remaining);
void		ft_stack_big(struct s_tab_count *data);
void		ft_redo(struct s_tab_count *data);

// checker

char		*ft_is_sorted(int *tab, int ac);
void		inst_reader(struct s_tab_count *count);
void		ft_ra_checker(int *a, struct s_tab_count *count);
int			logic_hand(char *tmp, struct s_tab_count *count);

#endif
