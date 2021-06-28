/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orodrigo <orodrigo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 03:25:51 by orodrigo          #+#    #+#             */
/*   Updated: 2021/06/18 18:46:04 by orodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	unsigned char	char_c;

	char_c = (unsigned char)c;
	if ((char_c >= 48 && char_c <= 57)
		|| (char_c >= 65 && char_c <= 90)
		|| (char_c >= 97 && char_c <= 122))
		return (1);
	else
		return (0);
}
