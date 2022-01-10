/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahimmi <ahimmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 01:22:28 by ahimmi            #+#    #+#             */
/*   Updated: 2022/01/07 01:22:40 by ahimmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_pa(int *last_b, int *last_a, struct s_tab_count *data)
{
	*last_a = *last_b;
	*last_b = 9999;
	if (data->remain_a != 0)
	{
		data->remain_a -= 1;
		data->remain_b += 1;
	}
	if (data->test == 1)
	{
		ft_putstr_fd("pa\n", 1);
	}
	data->instructions += 1;
}
