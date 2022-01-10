/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_big.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahimmi <ahimmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:06:16 by ahimmi            #+#    #+#             */
/*   Updated: 2022/01/07 01:28:28 by ahimmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_rest_tab(struct s_tab_count *data)
{
	int	j;

	j = 0;
	while (j < data->stack_a)
	{
		data->a[j] = data->static_tab_a[j];
		j++;
	}
	data->remain_a = 0;
	data->remain_b = data->c_a;
	data->test = 0;
	data->instructions = 0;
}

void	best_pivot(struct s_tab_count *data, int pivot)
{
	data->new_pivot = pivot;
	if (data->passed_instructions == 0)
	{
		data->passed_instructions = data->instructions;
		data->passed_pivot = data->new_pivot;
	}
	else if (data->passed_instructions > data->instructions)
	{
		data->passed_instructions = data->instructions;
		data->passed_pivot = data->new_pivot;
	}
	ft_rest_tab(data);
}

void	ft_stack_big(struct s_tab_count *data)
{
	int	i;
	int	pivot;

	i = 0;
	while (i < data->stack_a)
	{
		if (data->pivot_i < data->stack_a)
		{
			pivot = ft_pick_pivot(data);
		}
		ft_send_to_b(data, pivot);
		ft_send_to_a(data);
		ft_stack_of_3_b(data, data->remain_b + 1);
		ft_pa(&data->b[data->remain_b + 1], &data->a[data->remain_a - 1], data);
		ft_pa(&data->b[data->remain_b + 1], &data->a[data->remain_a - 1], data);
		ft_pa(&data->b[data->remain_b + 1], &data->a[data->remain_a - 1], data);
		i++;
		data->new_pivot = pivot;
		best_pivot(data, pivot);
	}
	ft_redo(data);
}
