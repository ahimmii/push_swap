/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_send_to_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahimmi <ahimmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:08:30 by ahimmi            #+#    #+#             */
/*   Updated: 2022/01/07 01:27:33 by ahimmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	prox(struct s_tab_count *data)
{
	if (ft_proximity_b(ft_max_pos(data), data))
		ft_rb(data);
	else
		ft_rrb(data);
}

void	ft_send_to_a(struct s_tab_count *data)
{
	while (1)
	{
		if (data->remain_a == data->c_a)
		{
			if (data->b[data->remain_b + 1] == \
			ft_max_nbr(data) && data->remain_a != 3)
			{
				ft_pa(&data->b[data->remain_b + 1], \
					&data->a[data->remain_a - 1], data);
				if (data->a[data->remain_a + 1] < data->a[data->remain_a])
					ft_sa(&data->a[data->remain_a + 1], \
					&data->a[data->remain_a], data);
			}
		}
		if (data->b[data->remain_b + 1] == \
		ft_max_nbr(data) && data->remain_a != 3)
			ft_pa(&data->b[data->remain_b + 1], \
				&data->a[data->remain_a - 1], data);
		else if (data->remain_a == 3)
			break ;
		else if (data->b[data->remain_b + 1] != \
		ft_max_nbr(data) && data->remain_a != 1)
			prox(data);
	}
}
