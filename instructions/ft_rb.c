/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahimmi <ahimmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:35:36 by ahimmi            #+#    #+#             */
/*   Updated: 2022/01/06 23:49:40 by ahimmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_rb(struct s_tab_count *data)
{
	int	i;
	int	tmp;
	int	tab_count;

	i = 0;
	tab_count = data->c_a;
	tmp = data->b[data->remain_b + 1];
	while (i < tab_count)
	{
		data->b[data->remain_b + 1 + i] = data->b[data->remain_b + 1 + i + 1];
		i++;
	}
	data->b[tab_count] = tmp;
	data->instructions += 1;
	if (data->test == 1)
	{
		ft_putstr_fd("rb\n", 1);
	}
}
