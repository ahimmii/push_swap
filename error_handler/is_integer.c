/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_integer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahimmi <ahimmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:41:28 by ahimmi            #+#    #+#             */
/*   Updated: 2022/01/06 00:41:48 by ahimmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

int	is_integer(int ac, char *av[])
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i <= ac - 1)
	{
		j = 0;
		while (av[i][j])
		{
			if ((av[i][j] >= 48 && av[i][j] <= 57) || \
				av[i][j] == 43 || av[i][j] == 45 || av[i][j] == 32)
			{
				j++;
			}
			else
			{
				ft_putstr_fd("Error\n", 2);
				return (0);
			}
		}
		i++;
	}
	return (1);
}
