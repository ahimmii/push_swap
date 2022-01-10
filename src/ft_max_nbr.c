/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahimmi <ahimmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:12:50 by ahimmi            #+#    #+#             */
/*   Updated: 2022/01/06 00:13:08 by ahimmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

int	ft_max_nbr(struct s_tab_count *data)
{
	int	i;
	int	max;
	int	tab_count;
	int	index;

	i = 0;
	max = data->b[data->remain_b + 1];
	tab_count = data->remain_a;
	index = data->remain_b + 1;
	while (i < tab_count)
	{
		if (data->b[index] > max)
		{
			max = data->b[index];
		}
		index++;
		tab_count--;
	}
	return (max);
}
