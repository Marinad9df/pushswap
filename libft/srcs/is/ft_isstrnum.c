/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isstrnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marigon2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 03:02:21 by marigon2          #+#    #+#             */
/*   Updated: 2024/11/13 03:02:24 by marigon2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isstrnum(char *str)
{
	int	i;
	int	n;

	i = 0;
	n = FALSE;
	while (str[i] == ' ')
		i++;
	if (str[i] == '-')
		i++;
	while (str[i])
	{
		if (ft_isdigit(str[i]))
			n = 1;
		else
			n = 0;
		i++;
	}
	return (n);
}
