/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahimmi <ahimmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:38:29 by ahimmi            #+#    #+#             */
/*   Updated: 2022/01/06 00:38:31 by ahimmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_sa(int *first_a, int *last_a, struct s_tab_count *data)
{
	ft_swap(first_a, last_a);
	data->instructions += 1;
	if (data->test == 1)
	{
		ft_putstr_fd("sa\n", 1);
	}
}
