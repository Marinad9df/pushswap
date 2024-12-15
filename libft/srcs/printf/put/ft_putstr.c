/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marigon2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 03:46:31 by marigon2          #+#    #+#             */
/*   Updated: 2024/11/13 03:46:33 by marigon2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char const *s)
{
	int	result;

	result = 0;
	if (!s)
		return (write(1, "(null)", 6));
	while (*s)
		result += ft_putchar(*s++);
	return (result);
}
