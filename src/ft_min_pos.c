/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_pos.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahimmi <ahimmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:11:01 by ahimmi            #+#    #+#             */
/*   Updated: 2022/01/06 00:11:02 by ahimmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

int	ft_min_pos(struct s_tab_count *data)
{
	int	i;
	int	min;
	int	tab_count;
	int	pos;

	pos = 0;
	i = 0;
	min = data->a[data->remain_a];
	tab_count = data->remain_b;
	while (i <= tab_count)
	{
		if (data->a[tab_count] < min)
		{
			min = data->a[tab_count];
			pos = tab_count;
		}
		tab_count--;
	}
	return (pos);
}
