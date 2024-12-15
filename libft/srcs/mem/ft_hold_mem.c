/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hold_mem.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marigon2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 03:38:30 by marigon2          #+#    #+#             */
/*   Updated: 2024/11/13 03:41:59 by marigon2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_hold_mem(size_t ac, t_list **list, ...)
{
	va_list	ap;
	void	**ptr;

	if (!list)
		return ;
	va_start(ap, list);
	while (ac-- > 0)
	{
		ptr = va_arg(ap, void **);
		if (ptr && *ptr)
		{
			ft_lstadd_back(list, ft_lstnew(*ptr));
			*ptr = NULL;
		}
	}
	va_end(ap);
}
