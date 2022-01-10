/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahimmi <ahimmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:37:53 by ahimmi            #+#    #+#             */
/*   Updated: 2022/01/06 00:37:54 by ahimmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_rra(struct s_tab_count *data)
{
	int	i;
	int	tmp;
	int	tab_count;

	i = 0;
	tab_count = data->c_a;
	tmp = data->a[data->c_a];
	while (i < data->remain_b)
	{
		data->a[tab_count] = data->a[tab_count - 1];
		tab_count--;
		i++;
	}
	data->a[data->remain_a] = tmp;
	data->instructions += 1;
	if (data->test == 1)
	{
		ft_putstr_fd("rra\n", 1);
	}
}
