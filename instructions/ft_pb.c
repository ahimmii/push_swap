/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahimmi <ahimmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 01:20:24 by ahimmi            #+#    #+#             */
/*   Updated: 2022/01/07 01:20:34 by ahimmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_pb(int *last_a, int *last_b, struct s_tab_count *data)
{
	*last_b = *last_a;
	*last_a = 9999;
	if (data->remain_b != 0)
	{
		data->remain_a += 1;
		data->remain_b -= 1;
	}
	if (data->test == 1)
	{
		ft_putstr_fd("pb\n", 1);
	}
	data->instructions += 1;
}
