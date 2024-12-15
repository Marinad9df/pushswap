/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marigon2 <marigon2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 12:06:26 by marigon2          #+#    #+#             */
/*   Updated: 2024/10/16 10:58:19 by marigon2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include "shared.h"

int		ft_nbrlen(long n);
int		ft_putnbr(int n);
int		ft_putchar(int c);
int		ft_printf(const char *str, ...);
long	ft_abs(long n);
void	ft_putbase_fd(int nbr, const char *base, int fd);
int		ft_puthexa(unsigned long n, char format);
int		ft_putstr(char const *s);
int		ft_putunsigned(unsigned long n);
int		ft_putaddress(void *format);

#endif
