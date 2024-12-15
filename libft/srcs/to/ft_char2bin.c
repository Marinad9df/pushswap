/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char2bin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marigon2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 03:51:13 by marigon2          #+#    #+#             */
/*   Updated: 2024/11/13 03:51:14 by marigon2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_char2bin(unsigned char c)
{
	char	*ret;

	ret = (char *)malloc(9 * sizeof(char));
	if (!ret)
		return (NULL);
	ret[0] = ((c & 0b10000000) >> 7) + '0';
	ret[1] = ((c & 0b01000000) >> 6) + '0';
	ret[2] = ((c & 0b00100000) >> 5) + '0';
	ret[3] = ((c & 0b00010000) >> 4) + '0';
	ret[4] = ((c & 0b00001000) >> 3) + '0';
	ret[5] = ((c & 0b00000100) >> 2) + '0';
	ret[6] = ((c & 0b00000010) >> 1) + '0';
	ret[7] = ((c & 0b00000001) >> 0) + '0';
	ret[8] = '\0';
	return (ret);
}
