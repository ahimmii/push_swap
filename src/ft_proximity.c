/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_proximity.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahimmi <ahimmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:09:16 by ahimmi            #+#    #+#             */
/*   Updated: 2022/01/06 00:09:22 by ahimmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

int	ft_proximity(int min_pos, struct s_tab_count *data)
{
	int	tab_size;

	tab_size = data->c_a + data->remain_a;
	if (min_pos <= (tab_size / 2))
	{
		return (1);
	}
	return (0);
}
