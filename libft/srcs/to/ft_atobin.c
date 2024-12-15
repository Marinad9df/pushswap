/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atobin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marigon2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 03:49:10 by marigon2          #+#    #+#             */
/*   Updated: 2024/11/13 03:49:12 by marigon2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	copy_bin(char *bin, char *char_bin, size_t *j)
{
	size_t	k;

	k = 0;
	while (k < 8)
	{
		bin[*j] = char_bin[k];
		(*j)++;
		k++;
	}
	free(char_bin);
}

char	*ft_atobin(const char *str)
{
	size_t	len;
	char	*bin;
	char	*char_bin;
	size_t	i;
	size_t	j;

	if (!str)
		return (NULL);
	len = ft_strlen(str);
	bin = malloc(8 * len + 1);
	if (!bin)
		return (NULL);
	i = -1;
	j = 0;
	while (++i < len)
	{
		char_bin = ft_char2bin((unsigned char)str[i]);
		if (!char_bin)
			return (free(bin), NULL);
		copy_bin(bin, char_bin, &j);
	}
	bin[j] = '\0';
	return (bin);
}
