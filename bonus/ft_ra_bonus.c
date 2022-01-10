/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahimmi <ahimmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 01:20:48 by ahimmi            #+#    #+#             */
/*   Updated: 2022/01/07 01:21:14 by ahimmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_ra_checker(int *a, struct s_tab_count *count)
{
	int	i;
	int	tmp;
	int	tab_count;

	i = 0;
	tab_count = count->c_a;
	tmp = a[count->remain_a];
	while (i < count->remain_b + 1)
	{
		a[count->remain_a + i] = a[count->remain_a + i + 1];
		i++;
	}
	a[tab_count] = tmp;
	count->instructions += 1;
	if (count->test == 1)
	{
		ft_putstr_fd("ra\n", 1);
	}
}
