/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahimmi <ahimmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:18:31 by ahimmi            #+#    #+#             */
/*   Updated: 2022/01/07 01:08:01 by ahimmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

int	sig(char str, int sign)
{
	if (str == 45)
		sign = -sign;
	return (sign);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	r;
	int	x;

	i = 0;
	sign = 1;
	r = 0;
	x = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == 43 || str[i] == 45)
		sign = sig(str[i++], sign);
	while (str[i] >= 48 && str[i] <= 57)
	{
		r = (str[i] - 48) + (r * 10);
		if (r < x)
		{
			ft_putstr_fd("Error\n", 2);
			exit(1);
		}
		x = r;
		i++;
	}
	return (r * sign);
}
