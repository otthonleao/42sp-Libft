/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orodrigo <orodrigo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 17:30:03 by orodrigo          #+#    #+#             */
/*   Updated: 2021/06/27 00:20:31 by orodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	unsigned char	char_c;

	char_c = (unsigned char)c;
	if ((char_c >= 65 && char_c <= 90) || (char_c >= 97 && char_c <= 122))
		return (1);
	else
		return (0);
}
