/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orodrigo <orodrigo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 18:28:26 by orodrigo          #+#    #+#             */
/*   Updated: 2021/06/18 19:05:54 by orodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	search;
	unsigned char	*s_cpy;

	s_cpy = (unsigned char *)s;
	search = (unsigned char)c;
	if (*s_cpy == search)
		return ((char *)s);
	while (*s_cpy++)
	{
		if (*s_cpy == search)
			return ((char *)s_cpy);
	}
	return (NULL);
}
