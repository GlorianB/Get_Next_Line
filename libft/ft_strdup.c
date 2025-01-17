/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbikoumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 05:41:37 by gbikoumo          #+#    #+#             */
/*   Updated: 2019/04/10 06:02:02 by gbikoumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char const *s1)
{
	size_t	len;
	char	*res;

	len = ft_strlen(s1);
	if ((res = (char *)malloc(sizeof(char) * len + 1)) == NULL)
		return (NULL);
	res = ft_strcpy(res, s1);
	return (res);
}
