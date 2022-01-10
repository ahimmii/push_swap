/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahimmi <ahimmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:38:19 by ahimmi            #+#    #+#             */
/*   Updated: 2022/01/06 00:38:20 by ahimmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_rrb(struct s_tab_count *data)
{
	int	i;
	int	tmp;
	int	tab_count;

	i = 0;
	tab_count = data->c_a;
	tmp = data->b[data->c_a];
	while (tab_count)
	{
		data->b[tab_count] = data->b[tab_count - 1];
		tab_count--;
	}
	data->b[data->remain_b + 1] = tmp;
	data->instructions += 1;
	if (data->test == 1)
	{
		ft_putstr_fd("rrb\n", 1);
	}
}
