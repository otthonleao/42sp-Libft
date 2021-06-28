/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orodrigo <orodrigo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 18:21:09 by orodrigo          #+#    #+#             */
/*   Updated: 2021/06/18 18:55:14 by orodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ptr_dst;
	unsigned char	*ptr_src;
	size_t			i;

	ptr_dst = (unsigned char *)dst;
	ptr_src = (unsigned char *)src;
	i = 0;
	if (ptr_dst == ptr_src)
		return (ptr_dst);
	if (dst > src)
	{
		ptr_dst = ptr_dst + len - 1;
		ptr_src = ptr_src + len - 1;
		while (len >= 1)
		{
			*ptr_dst = *ptr_src;
			ptr_dst--;
			ptr_src--;
			len--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
