/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_successful.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marigon2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 04:04:21 by marigon2          #+#    #+#             */
/*   Updated: 2024/11/13 04:04:22 by marigon2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_successful(char *msg, t_bool yeet)
{
	if (msg && *msg)
		ft_putstr_color_fd(GREEN, msg, 1);
	if (yeet)
		exit(EXIT_SUCCESS);
}
