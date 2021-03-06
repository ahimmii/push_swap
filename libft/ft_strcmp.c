/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahimmi <ahimmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:28:56 by ahimmi            #+#    #+#             */
/*   Updated: 2022/01/06 00:28:57 by ahimmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' && s1[i] != '\0') && (s1[i] == s2[i]))
	{
		i++;
	}
	if (s1[i] == s2[i])
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
