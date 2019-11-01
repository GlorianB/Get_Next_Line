/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbikoumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 01:47:51 by gbikoumo          #+#    #+#             */
/*   Updated: 2019/06/11 00:11:30 by gbikoumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int				get_next_line(const int fd, char **line)
{
	static char *stock[OPEN_MAX];
	char		buf[BUFF_SIZE + 1];
	char		*tmp;
	int			r;

	if (!line || fd < 0 || fd >= OPEN_MAX || BUFF_SIZE < 1)
		return (-1);
	if (!stock[fd] && !(stock[fd] = ft_strnew(1)))
		return (-1);
	while (!ft_strchr(stock[fd], '\n') && ((r = read(fd, buf, BUFF_SIZE))) > 0)
	{
		buf[r] = '\0';
		if (!(tmp = ft_strjoin(stock[fd], buf)))
			return (-1);
		ft_strclean(&stock[fd], tmp);
	}
	if (r >= 0 && (*line = ft_strsub(stock[fd], 0, ft_strcchri(stock[fd]))))
		if (ft_strlen(stock[fd]) || ft_strlen(*line))
		{
			if (!(tmp = ft_strdup(stock[fd] + ft_strcchri(stock[fd]) + 1)))
				return (-1);
			ft_strclean(&stock[fd], tmp);
			return (1);
		}
	return ((*line == NULL) ? -1 : r);
}
