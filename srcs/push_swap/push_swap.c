/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marigon2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 03:22:39 by marigon2          #+#    #+#             */
/*   Updated: 2024/11/13 03:22:41 by marigon2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init(t_stack *a, t_stack *b, int *nb, int c)
{
	t_node	*tmp;

	b->head = NULL;
	b->size = 0;
	ins_sort(nb, c);
	tmp = a->head;
	while (tmp)
	{
		tmp->index = ft_index(tmp->data, nb);
		tmp = tmp->next;
	}
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	b;
	int		*num;
	int		count;

	if (ac == 1)
		ft_error("Error\n", 1);
	count = check_digits(ac, av);
	num = parse(ac, av, count);
	if (count <= 1 || ft_isndup(num, count))
	{
		free(num);
		if (count == 1)
			ft_error("", 1);
		ft_error("Error\n", 1);
	}
	ft_load_stack(&a, count, num);
	init(a, &b, num, a->size);
	sort(a, &b, num, a->size);
	free(num);
	free_stacks(a, &b);
	return (0);
}
