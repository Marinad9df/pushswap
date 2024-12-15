/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marigon2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 03:23:47 by marigon2          #+#    #+#             */
/*   Updated: 2024/11/13 03:23:52 by marigon2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_r(t_node *stack, int index)
{
	int	counter;

	counter = 0;
	while (stack && stack->index != index)
	{
		stack = stack->next;
		counter++;
	}
	return (counter);
}

int	get_min_index(t_stack *stack)
{
	t_node	*current;
	int		min_index;

	current = stack->head;
	min_index = current->index;
	while (current->next)
	{
		current = current->next;
		if (current->index < min_index)
			min_index = current->index;
	}
	return (min_index);
}
