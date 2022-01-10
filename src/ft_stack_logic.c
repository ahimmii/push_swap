/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_logic.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahimmi <ahimmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:06:08 by ahimmi            #+#    #+#             */
/*   Updated: 2022/01/07 01:57:25 by ahimmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_stack_min(struct s_tab_count *data)
{
	if (data->stack_a == 2)
	{
		data->test = 1;
		ft_stack_of_2(data);
	}
	if (data->stack_a == 3)
	{
		data->test = 1;
		ft_stack_of_3(data, data->remain_a);
	}
	if (data->stack_a == 4)
	{
		data->test = 1;
		ft_stack_of_4(data);
	}
}

void	ft_stack_logic(struct s_tab_count *data)
{
	if (ft_strcmp(ft_is_sorted(data->a, (data->size_tab + 1)), "OK\n"))
		return ;
	ft_stack_min(data);
	if (data->stack_a == 5)
	{
		data->test = 1;
		ft_stack_of_5(data);
	}
	if (data->stack_a > 5)
		ft_stack_big(data);
}
