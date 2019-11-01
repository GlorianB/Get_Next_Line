/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbikoumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 09:23:00 by gbikoumo          #+#    #+#             */
/*   Updated: 2019/04/06 10:05:29 by gbikoumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	index;
	char	*res;

	if ((res = (char *)malloc(sizeof(char) * size + 1)) == NULL)
		return (NULL);
	index = 0;
	while (index < size)
	{
		res[index] = '\0';
		index++;
	}
	res[index] = '\0';
	return (res);
}
