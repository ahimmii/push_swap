/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mid_pivot.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahimmi <ahimmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:11:12 by ahimmi            #+#    #+#             */
/*   Updated: 2022/01/07 00:51:03 by ahimmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

static int	cases(int start, int mid, int end)
{
	if (start > mid && end > start && mid < end)
		return (start);
	if (start > mid && mid > end && end < start)
		return (mid);
	if (start > mid && mid < end && end < start)
		return (end);
	if (start < mid && mid > end && end > start)
		return (end);
	if (start < mid && mid > end && end < start)
		return (start);
	if (start < mid && mid < end && end > start)
		return (mid);
	return (-1);
}

int	ft_mid_pivot(struct s_tab_count *data)
{
	int	start;
	int	mid;
	int	end;
	int	rslt;

	start = data->a[data->remain_a];
	mid = data->a[(data->c_a + data->remain_a) / 2];
	end = data->a[data->c_a];
	rslt = cases(start, mid, end);
	return (rslt);
}
