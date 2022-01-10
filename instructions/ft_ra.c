/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahimmi <ahimmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:34:46 by ahimmi            #+#    #+#             */
/*   Updated: 2022/01/06 00:34:47 by ahimmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_ra(struct s_tab_count *data)
{
	int	i;
	int	tmp;
	int	tab_count;

	i = 0;
	tab_count = data->c_a;
	tmp = data->a[data->remain_a];
	while (i < data->remain_b)
	{
		data->a[data->remain_a + i] = data->a[data->remain_a + i + 1];
		i++;
	}
	data->a[tab_count] = tmp;
	data->instructions += 1;
	if (data->test == 1)
	{
		ft_putstr_fd("ra\n", 1);
	}
}
