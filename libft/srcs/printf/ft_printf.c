/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marigon2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 04:05:45 by marigon2          #+#    #+#             */
/*   Updated: 2024/11/13 04:05:48 by marigon2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(va_list args, const char format)
{
	void	*p;

	if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format == 'p')
	{
		p = va_arg(args, void *);
		if (p)
			return (ft_putaddress(p));
		return (ft_putstr("(nil)"));
	}
	else if (format == 'u')
		return (ft_putunsigned(va_arg(args, unsigned int)));
	else if (format == 'X' || format == 'x')
		return (ft_puthexa(va_arg(args, int), format));
	else if (format == '%')
		return (ft_putchar('%'));
	else
		return (-1);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		length;

	if (!str)
		return (-1);
	i = 0;
	length = 0;
	va_start(args, str);
	while (*(str + i))
	{
		if (*(str + i) == '%' && ft_strchr("cspdiuxX%", *(str + i + 1)))
		{
			length += ft_format(args, *(str + i + 1));
			i++;
		}
		else
			length += ft_putchar(*(str + i));
		i++;
	}
	va_end(args);
	return (length);
}
