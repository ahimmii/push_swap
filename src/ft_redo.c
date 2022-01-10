/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_redo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahimmi <ahimmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:08:57 by ahimmi            #+#    #+#             */
/*   Updated: 2022/01/07 01:26:23 by ahimmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_redo(struct s_tab_count *data)
{
	data->test = 1;
	ft_send_to_b(data, data->passed_pivot);
	ft_send_to_a(data);
	ft_stack_of_3_b(data, data->remain_b + 1);
	ft_pa(&data->b[data->remain_b + 1], &data->a[data->remain_a - 1], data);
	ft_pa(&data->b[data->remain_b + 1], &data->a[data->remain_a - 1], data);
	ft_pa(&data->b[data->remain_b + 1], &data->a[data->remain_a - 1], data);
}
