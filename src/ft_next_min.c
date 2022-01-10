/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_next_min.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahimmi <ahimmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:10:37 by ahimmi            #+#    #+#             */
/*   Updated: 2022/01/06 00:10:38 by ahimmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

int	ft_next_min(struct s_tab_count *data, int pivot)
{
	int	i;
	int	pos;
	int	index;

	pos = -1;
	index = data->remain_a;
	i = 0;
	while (i <= data->remain_b)
	{
		if (data->a[index] < pivot)
		{
			pos = index;
			break ;
		}
		index++;
		i++;
	}
	return (pos);
}
