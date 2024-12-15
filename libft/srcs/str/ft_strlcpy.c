/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marigon2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 03:57:25 by marigon2          #+#    #+#             */
/*   Updated: 2024/11/13 03:57:27 by marigon2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;	

	i = 0;
	while (src[i])
		i++;
	if (!dstsize)
		return (i);
	while (--dstsize != 0 && *src)
		*dst++ = *src++;
	*dst = '\0';
	return (i);
}
