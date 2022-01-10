/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_of_4.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahimmi <ahimmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 23:42:59 by ahimmi            #+#    #+#             */
/*   Updated: 2022/01/07 01:24:46 by ahimmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_stack_of_4(struct s_tab_count *data)
{
	while (1)
	{
		if (data->a[data->remain_a] == ft_min_nbr(data) && data->remain_b > 2)
		{
			ft_pb(&data->a[data->remain_a], &data->b[data->remain_b], data);
		}
		else
		{
			if (ft_proximity(ft_min_pos(data), data))
			{
				ft_ra(data);
			}
			else
			{
				ft_rra(data);
			}
			if (data->remain_b == 2)
			{
				break ;
			}
		}
	}
	ft_stack_of_3(data, 1);
	ft_pa(&data->b[data->remain_b + 1], &data->a[data->remain_a - 1], data);
}
