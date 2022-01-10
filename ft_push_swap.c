/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahimmi <ahimmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 01:28:25 by ahimmi            #+#    #+#             */
/*   Updated: 2022/01/07 00:49:59 by ahimmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_free(int *tab1, int *tab2, int *tab3)
{
	free(tab1);
	free(tab2);
	free(tab3);
}

void	ft_strat_v(struct s_tab_count *data)
{
	data->a_v = 0;
	data->b_v = 0;
	data->remain_a = 0;
	data->remain_b = 0;
	data->c_a = 0;
	data->pivot_i = 0;
	data->instructions = 0;
	data->passed_instructions = 0;
	data->passed_pivot = 0;
	data->new_pivot = 0;
	data->test = 0;
	data->a_v = data->size_tab - 1;
	data->b_v = 0;
	data->stack_a = data->size_tab;
	data->c_a = data->size_tab - 1;
	data->remain_a = 0;
	data->remain_b = data->a_v;
}

int	main(int ac, char *av[])
{
	struct s_tab_count	data;
	int					*tab1;
	int					*tab2;
	int					*tab3;

	data.size_tab = 0;
	data.size_tab = ft_size_tab(ac, av);
	ft_strat_v(&data);
	if (ac != 1)
	{
		if (is_integer(ac, av) == 1)
		{
			data.a = ft_tab_malloc(ac, av);
			data.static_tab_a = ft_tab_malloc(ac, av);
			data.b = (int *)malloc(sizeof(int) * data.size_tab);
			tab1 = data.static_tab_a;
			tab2 = data.a;
			tab3 = data.b;
		}
		if (is_duplicate(data.size_tab, data.a) == 0)
			ft_stack_logic(&data);
		ft_free(tab1, tab2, tab3);
	}
	return (0);
}
