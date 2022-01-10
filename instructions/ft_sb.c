/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahimmi <ahimmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:38:40 by ahimmi            #+#    #+#             */
/*   Updated: 2022/01/06 00:38:41 by ahimmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_sb(int *first_b, int *last_b, struct s_tab_count *data)
{
	ft_swap(first_b, last_b);
	data->instructions += 1;
	if (data->test == 1)
	{
		ft_putstr_fd("sb\n", 1);
	}
}
