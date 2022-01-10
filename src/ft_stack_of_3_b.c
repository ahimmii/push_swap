/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_of_3_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahimmi <ahimmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:02:41 by ahimmi            #+#    #+#             */
/*   Updated: 2022/01/07 00:36:42 by ahimmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_stack_of_3_b(struct s_tab_count *data, int remaining)
{
	int	top;
	int	middle;
	int	bottom;

	top = data->b[remaining];
	middle = data->b[remaining + 1];
	bottom = data->b[remaining + 2];
	if (top < middle && bottom < top && middle > bottom)
		return (ft_sb(&data->b[remaining], &data->b[remaining + 1], data));
	if (top < middle && middle < bottom && bottom > top)
		return (ft_sb(&data->b[data->remain_b + 1], \
		&data->b[remaining + 1], data), ft_rrb(data));
	if (top < middle && middle > bottom && bottom > top)
		return (ft_rb(data));
	if (top > middle && middle < bottom && bottom < top)
		return (ft_sb(&data->b[remaining], \
		&data->b[remaining + 1], data), ft_rb(data));
	if (top > middle && middle < bottom && bottom > top)
		return (ft_rrb(data));
	return ;
}
