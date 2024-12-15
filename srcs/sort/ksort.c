/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ksort.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marigon2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 03:23:29 by marigon2          #+#    #+#             */
/*   Updated: 2024/11/13 03:23:32 by marigon2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	k_sort1(t_stack *stack_a, t_stack *stack_b, int length)
{
	int	i;
	int	range;

	i = 0;
	range = ft_sqrt(length) * 14 / 10;
	while (stack_a->head)
	{
		if (stack_a->head->index <= i)
		{
			push(stack_b, stack_a, 'b', TRUE);
			i++;
		}
		else if (stack_a->head->index <= i + range)
		{
			push(stack_b, stack_a, 'b', TRUE);
			i++;
			if (!(stack_a->head->index <= i + range))
				rotate_both(stack_a, stack_b, TRUE);
			else
				rotate(stack_b, 'b', TRUE);
		}
		else
			rotate(stack_a, 'a', TRUE);
	}
}

void	k_sort2(t_stack *stack_a, t_stack *stack_b, int length)
{
	int	rb_count;
	int	rrb_count;

	while (length - 1 >= 0)
	{
		rb_count = count_r(stack_b->head, length - 1);
		rrb_count = (length + 3) - rb_count;
		if (rb_count <= rrb_count)
		{
			while (stack_b->head->index != length - 1)
				rotate(stack_b, 'b', TRUE);
			push(stack_a, stack_b, 'a', TRUE);
			length--;
		}
		else
		{
			while (stack_b->head->index != length - 1)
				reverse_rotate(stack_b, 'b', TRUE);
			push(stack_a, stack_b, 'a', TRUE);
			length--;
		}
	}
}
