/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_duplicate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahimmi <ahimmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:41:09 by ahimmi            #+#    #+#             */
/*   Updated: 2022/01/06 00:41:09 by ahimmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

int	is_duplicate(int tab_count, int *tab)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < tab_count)
	{
		j = i + 1;
		while (j < tab_count)
		{
			if (tab[i] == tab[j])
			{
				ft_putstr_fd("Error\n", 2);
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}
