/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_send_to_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahimmi <ahimmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:06:54 by ahimmi            #+#    #+#             */
/*   Updated: 2022/01/07 01:28:06 by ahimmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_send_to_b(struct s_tab_count *data, int pivot)
{
	while (1)
	{
		if (data->a[data->remain_a] < pivot && data->remain_b != 1)
		{
			ft_pb(&data->a[data->remain_a], &data->b[data->remain_b], data);
		}
		else if (data->remain_b == 1)
		{
			ft_pb(&data->a[data->remain_a], &data->b[data->remain_b], data);
			break ;
		}
		else if (ft_next_min(data, pivot) != -1)
		{
			if (ft_proximity(ft_next_min(data, pivot), data))
				ft_ra(data);
			else
				ft_rra(data);
		}
		else if (ft_next_min(data, pivot) == -1)
		{
			pivot = ft_mid_pivot(data);
		}
	}
}
