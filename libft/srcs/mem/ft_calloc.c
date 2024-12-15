/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marigon2 <marigon2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 03:00:00 by marigon2          #+#    #+#             */
/*   Updated: 2024/11/13 03:05:15 by marigon2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	s_zero(void *s, size_t n)
{
	while (n--)
		*(unsigned char *)s++ = 0;
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*memory;

	if (count == 0 || size == 0 || SIZE_MAX / count < size)
		return (NULL);
	memory = malloc(count * size);
	if (!memory)
		return (NULL);
	s_zero(memory, count * size);
	return (memory);
}
