/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahimmi <ahimmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 00:24:31 by ahimmi            #+#    #+#             */
/*   Updated: 2022/01/07 00:32:51 by ahimmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

static int	ft_strlen_2(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	unsigned int	i;
	unsigned int	len1;
	unsigned int	len2;
	char			*dest;

	i = 0;
	len1 = ft_strlen_2(s1);
	len2 = ft_strlen_2(s2);
	dest = (char *)malloc(len1 + len2 + 1 * sizeof(char));
	if (!dest)
		return (NULL);
	while (i < len1)
	{
		dest[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < len2)
	{
		dest[len1 + i] = s2[i];
		i++;
	}
	dest[i + len1] = '\0';
	free((char *)s1);
	return (dest);
}
