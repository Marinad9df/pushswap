/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marigon2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 03:03:33 by marigon2          #+#    #+#             */
/*   Updated: 2024/11/13 03:03:38 by marigon2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*head;
	t_list	*temp;

	if (!lst || !*lst)
		return ;
	head = *lst;
	while (head)
	{
		temp = head;
		head = head->next;
		if (del)
			del(temp->content);
		free(temp);
		temp = NULL;
	}
	*lst = NULL;
}
