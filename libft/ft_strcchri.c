/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcchri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbikoumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 06:46:53 by gbikoumo          #+#    #+#             */
/*   Updated: 2019/05/05 08:39:24 by gbikoumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strcchri(char const *s)
{
	size_t index;

	index = 0;
	while (s[index] && s[index] != '\n')
		index++;
	return (index);
}
