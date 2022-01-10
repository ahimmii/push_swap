/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahimmi <ahimmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 00:55:25 by ahimmi            #+#    #+#             */
/*   Updated: 2022/01/07 01:08:40 by ahimmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

static void	ft_init(int ac, struct s_tab_count *count)
{
	count->a_v = ac - 2;
	count->c_a = ac - 2;
	count->remain_a = 0;
	count->remain_b = count->a_v;
}

int	main(int ac, char *av[])
{
	struct s_tab_count	count;

	if (ac != 1)
	{
		ft_init(ac, &count);
		count.size_tab = ft_size_tab(ac, av);
		count.a = ft_tab_malloc(ac, av);
		count.b = (int *)malloc(sizeof(int) * ac - 1);
		if (is_integer(ac, av) == 1 && \
		is_duplicate(count.size_tab, count.a) == 0)
		{
			inst_reader(&count);
			if (count.tmp == NULL)
				ft_putstr_fd(ft_is_sorted(count.a, ac), 1);
		}
		free(count.a);
		free(count.b);
	}
	return (0);
}
