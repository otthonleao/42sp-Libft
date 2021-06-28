/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orodrigo <orodrigo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 03:28:16 by orodrigo          #+#    #+#             */
/*   Updated: 2021/06/17 14:41:18 by orodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	unsigned char	char_c;

	char_c = (unsigned char)c;
	if (char_c >= 65 && char_c <= 90)
		char_c = char_c + 32;
	return (char_c);
}
