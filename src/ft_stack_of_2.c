/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahimmi <ahimmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:05:49 by ahimmi            #+#    #+#             */
/*   Updated: 2022/01/07 01:41:35 by ahimmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_stack_of_2(struct s_tab_count *data)
{
	int	top;
	int	bottom;

	top = data->a[data->remain_a];
	bottom = data->a[data->remain_a + 1];
	if (top > bottom)
	{
		ft_sa(&data->a[data->remain_a], &data->a[data->remain_a + 1], data);
	}
}
