/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marigon2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 03:46:04 by marigon2          #+#    #+#             */
/*   Updated: 2024/11/13 03:46:06 by marigon2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nbrlen(long n)
{
	int	i;

	if (n < 0)
	{
		n = ft_abs(n);
		i = 1;
	}
	else
		i = 0;
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i + 1);
}

int	ft_putnbr(int n)
{
	int	nbr_len;

	nbr_len = ft_nbrlen(n);
	ft_putnbr_fd(n, 1);
	return (nbr_len);
}
