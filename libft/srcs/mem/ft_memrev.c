/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marigon2 <marigon2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 03:30:00 by marigon2          #+#    #+#             */
/*   Updated: 2024/11/13 03:06:55 by marigon2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memrev(void *ptr, size_t size)
{
	unsigned char	*start;
	unsigned char	*end;
	unsigned char	temp;

	if (!ptr || size <= 1)
		return ;
	start = (unsigned char *)ptr;
	end = start + size - 1;
	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
