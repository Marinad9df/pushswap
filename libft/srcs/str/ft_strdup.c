/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marigon2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 03:55:17 by marigon2          #+#    #+#             */
/*   Updated: 2024/11/13 03:55:23 by marigon2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_strcpy(char *ptr, const char *s1)
{
	int	i;

	i = 0;
	if (!ptr || !s1)
		return ;
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
}

char	*ft_strdup(const char *s1)
{
	char	*ptr;

	ptr = malloc(ft_strlen(s1) + 1);
	if (!ptr)
		return (NULL);
	ft_strcpy(ptr, s1);
	return (ptr);
}
