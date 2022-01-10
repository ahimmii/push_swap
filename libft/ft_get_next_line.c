/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahimmi <ahimmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:18:46 by ahimmi            #+#    #+#             */
/*   Updated: 2022/01/07 00:32:44 by ahimmi           ###   ########.fr       */
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

static int	buffer_len(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (-1);
	while (str[i] != '\0' && str[i] != '\n')
	{
		i++;
	}
	if (str[i] == '\0')
		return (-1);
	return (i);
}

static char	*line_cutter(char *str_static)
{
	int		pos;
	char	*new;
	int		i;

	pos = buffer_len(str_static);
	i = 0;
	if (!str_static)
		return (NULL);
	if (pos == -1)
		return (ft_strdup(str_static));
	new = (char *)malloc(pos + 2 * sizeof(char));
	if (!new)
		return (NULL);
	while (str_static[i] != '\n')
	{
		new[i] = str_static[i];
		i++;
	}
	new[i] = '\n';
	new[i + 1] = '\0';
	return (new);
}

static char	*old_line_rm(char *str_static)
{
	int		pos;
	int		remaining;
	char	*new_buff;

	pos = buffer_len(str_static);
	remaining = ft_strlen_2(str_static);
	if (!str_static)
		return (NULL);
	if (pos == -1 || (remaining - pos) == 1)
		return (free(str_static), NULL);
	new_buff = ft_strdup(str_static + pos + 1);
	free((char *)str_static);
	return (new_buff);
}

char	*get_next_line(int fd)
{
	int			rt;
	char		*new_str;
	char		*tmp_str;
	static char	*str_static;

	if (fd < 0)
		return (NULL);
	tmp_str = (char *)malloc(1 + 1);
	if (!tmp_str)
		return (NULL);
	while (buffer_len(str_static) == -1)
	{
		rt = read(fd, tmp_str, 1);
		if (rt <= 0)
			break ;
		tmp_str[rt] = '\0';
		str_static = ft_strjoin(str_static, tmp_str);
	}
	free((char *)tmp_str);
	new_str = line_cutter(str_static);
	str_static = old_line_rm(str_static);
	return (new_str);
}
