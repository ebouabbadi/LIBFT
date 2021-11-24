/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 20:23:23 by ebouabba          #+#    #+#             */
/*   Updated: 2021/11/24 04:22:16 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	k = ft_strlen(needle);
	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && len > i)
	{
		if (haystack[i + j] == needle[j])
		{
			if (ft_strncmp(&haystack[i], needle, k) == 0 && i + k <= len)
				return ((char *)&haystack[i]);
				j++;
		}
		i++;
	}
	return (NULL);
}
