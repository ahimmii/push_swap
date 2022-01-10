/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_malloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahimmi <ahimmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:18:21 by ahimmi            #+#    #+#             */
/*   Updated: 2022/01/06 04:16:40 by ahimmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

int	*ft_tab_malloc(int ac, char *av[])
{
	int	i;
	int	j;
	int	x;
	int	*tab;

	i = 1;
	j = 0;
	x = -1;
	tab = (int *)malloc(sizeof(int) * (ft_size_tab(ac, av)));
	if (!tab && !*tab)
		return (NULL);
	while (i < ac)
	{
		j = 0;
		if (av[i][j] != ' ')
			tab[++x] = ft_atoi(av[i]);
		while (av[i][j])
		{
			if (av[i][j] == ' ' && av[i][j + 1] >= 48 && av[i][j + 1] <= 57)
				tab[++x] = ft_atoi(&av[i][j]);
			j++;
		}
		i++;
	}
	return (tab);
}
