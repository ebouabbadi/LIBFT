/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 10:52:03 by ebouabba          #+#    #+#             */
/*   Updated: 2021/11/24 02:00:08 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	ch;

	ch = (unsigned char)c;
	i = 0;
	while (s[i] != ch)
	{
		if (s[i] == '\0')
			return (NULL);
		if (s[i] == ch)
			return ((char *)&s[i]);
		i++;
	}
	return ((char *)&s[i]);
}
