/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_of_3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahimmi <ahimmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 23:56:33 by ahimmi            #+#    #+#             */
/*   Updated: 2022/01/07 00:38:35 by ahimmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_stack_of_3(struct s_tab_count *data, int remaining)
{
	int	top;
	int	middle;
	int	bottom;

	top = data->a[remaining];
	middle = data->a[remaining + 1];
	bottom = data->a[remaining + 2];
	if (top > middle && bottom > top && middle < bottom)
		return (ft_sa(&data->a[remaining], &data->a[remaining + 1], data));
	if (top > middle && middle > bottom && bottom < top)
		return (ft_sa(&data->a[remaining], \
		&data->a[remaining + 1], data), ft_rra(data));
	if (top > middle && middle < bottom && bottom < top)
		return (ft_ra(data));
	if (top < middle && middle > bottom && bottom > top)
		return (ft_sa(&data->a[remaining], \
		&data->a[remaining + 1], data), ft_ra(data));
	if (top < middle && middle > bottom && bottom < top)
		return (ft_rra(data));
	return ;
}
