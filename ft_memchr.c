/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orodrigo <orodrigo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 18:23:43 by orodrigo          #+#    #+#             */
/*   Updated: 2021/06/18 19:00:45 by orodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr_s_cpy;
	size_t			i;

	ptr_s_cpy = (unsigned char *)s;
	i = 0;
	while (ptr_s_cpy[i] != '\0' && i < n)
	{
		if (ptr_s_cpy[i] == (unsigned char)c)
			return (ptr_s_cpy + i);
		i++;
	}
	return (NULL);
}
