/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orodrigo <orodrigo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 03:26:31 by orodrigo          #+#    #+#             */
/*   Updated: 2021/06/16 03:11:06 by orodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	unsigned char	char_c;

	char_c = (unsigned char)c;
	if (char_c >= 32 && char_c <= 126)
		return (1);
	return (0);
}
