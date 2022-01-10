/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_proximity_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahimmi <ahimmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:10:07 by ahimmi            #+#    #+#             */
/*   Updated: 2022/01/06 00:10:08 by ahimmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

int	ft_proximity_b(int max_pos, struct s_tab_count *data)
{
	int	tab_size;

	tab_size = data->c_a + data->remain_b + 1;
	if (max_pos <= (tab_size / 2))
	{
		return (1);
	}
	return (0);
}
