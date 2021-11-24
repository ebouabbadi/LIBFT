/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 08:51:38 by ebouabba          #+#    #+#             */
/*   Updated: 2021/11/24 01:37:39 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst == src)
		return (dst);
	else if (src < dst)
	{
		while (len--)
		{
			*(char *)(dst + len) = *(char *)(src + len);
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
