/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahimmi <ahimmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 23:56:18 by ahimmi            #+#    #+#             */
/*   Updated: 2022/01/05 23:59:14 by ahimmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

int	ft_min_nbr(struct s_tab_count *data)
{
	int	i;
	int	min;
	int	tab_count;

	i = 0;
	min = data->a[data->c_a];
	tab_count = data->remain_b;
	while (i <= tab_count)
	{
		if (data->a[tab_count] <= min)
		{
			min = data->a[tab_count];
		}
		tab_count--;
	}
	return (min);
}
