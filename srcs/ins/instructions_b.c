/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marigon2 <marigon2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 14:20:23 by marigon2          #+#    #+#             */
/*   Updated: 2024/11/13 04:10:54 by marigon2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_stack(t_stack *stack1, t_stack *stack2)
{
	t_node	*first;

	if (stack2->size == 0)
		return ;
	first = stack2->head;
	stack2->head = first->next;
	if (stack2->head != NULL)
		stack2->head->prev = NULL;
	else
		stack2->tail = NULL;
	first->next = stack1->head;
	if (stack1->head != NULL)
		stack1->head->prev = first;
	else
		stack1->tail = first;
	stack1->head = first;
	stack1->size++;
	stack2->size--;
}

void	rotate_both(t_stack *stack_a, t_stack *stack_b, t_bool p)
{
	rotate(stack_a, 'a', FALSE);
	rotate(stack_b, 'b', FALSE);
	if (p)
		write(1, "rr\n", 3);
}

void	swap_both(t_stack *stack1, t_stack *stack2, t_bool p)
{
	rotate(stack1, 'a', FALSE);
	rotate(stack2, 'b', FALSE);
	if (p)
		write(1, "ss\n", 3);
}

void	reverse_rotate_both(t_stack *stack_a, t_stack *stack_b, t_bool p)
{
	reverse_rotate(stack_a, 'a', FALSE);
	reverse_rotate(stack_b, 'b', FALSE);
	if (p)
		write(1, "rrr\n", 3);
}
