/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orodrigo <orodrigo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 03:26:47 by orodrigo          #+#    #+#             */
/*   Updated: 2021/06/17 15:00:17 by orodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	unsigned char	char_c;

	char_c = (unsigned char)c;
	if (char_c >= 97 && char_c <= 122)
		char_c = char_c - 32;
	return (char_c);
}
