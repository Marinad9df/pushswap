/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marigon2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 03:57:00 by marigon2          #+#    #+#             */
/*   Updated: 2024/11/13 03:57:07 by marigon2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t		dst_len;
	size_t		total_len;
	const char	*s;

	s = src;
	dst_len = 0;
	while (dst[dst_len] && dst_len < dstsize)
		dst_len++;
	if (dst_len < dstsize)
		total_len = dst_len + ft_strlen(s);
	else
		return (dstsize + ft_strlen(s));
	while (*s && (dst_len + 1) < dstsize)
	{
		*(dst + dst_len) = *s++;
		dst_len++;
	}
	dst[dst_len] = '\0';
	return (total_len);
}
