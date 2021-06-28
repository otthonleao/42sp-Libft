/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orodrigo <orodrigo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 03:23:19 by orodrigo          #+#    #+#             */
/*   Updated: 2021/06/16 15:19:13 by orodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t			i;
	unsigned char	str1;
	unsigned char	str2;

	i = 0;
	if (n == 0)
		return (0);
	else
	{
		while ((i < (n - 1))
			&& (s1[i] == s2[i])
			&& (s1[i] != '\0'))
		{
			i++;
		}
		str1 = s1[i];
		str2 = s2[i];
	}
	return (str1 - str2);
}
