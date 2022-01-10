/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahimmi <ahimmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 00:54:03 by ahimmi            #+#    #+#             */
/*   Updated: 2022/01/07 01:29:49 by ahimmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

int	logic_hand(char *tmp, struct s_tab_count *count)
{
	if (ft_strcmp("ra\n", tmp))
		return (ft_ra_checker(count->a, count), 1);
	if (ft_strcmp("sa\n", tmp))
		return (ft_sa(&count->a[count->remain_a + 1], \
				&count->a[count->remain_a], count), 1);
	if (ft_strcmp("pa\n", tmp))
		return (ft_pa(&count->b[count->remain_b + 1], \
			&count->a[count->remain_a - 1], count), 1);
	if (ft_strcmp("rra\n", tmp))
		return (ft_rra(count), 1);
	if (ft_strcmp("rb\n", tmp))
		return (ft_rb(count), 1);
	if (ft_strcmp("pb\n", tmp))
		return (ft_pb(&count->a[count->remain_a], \
			&count->b[count->remain_b], count), 1);
	if (ft_strcmp("sb\n", tmp))
		return (ft_sb(&count->b[count->remain_b + 1], \
		&count->b[count->remain_b + 2], count), 1);
	if (ft_strcmp("rrb\n", tmp))
		return (ft_rrb(count), 1);
	return (0);
}

void	inst_reader(struct s_tab_count *count)
{
	while (1)
	{
		count->tmp = get_next_line(0);
		if (count->tmp == NULL)
			break ;
		if (logic_hand(count->tmp, count) == 0)
			ft_putstr_fd("Error\n", 2);
		free(count->tmp);
	}
}
