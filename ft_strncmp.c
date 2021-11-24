/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 15:43:44 by ebouabba          #+#    #+#             */
/*   Updated: 2021/11/24 02:55:47 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	res;

	i = 0;
	while (n > i && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
		{
			res = (unsigned char)s1[i] - (unsigned char)s2[i];
			return (res);
		}
		i++;
	}
	return (0);
}
