/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marigon2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 03:21:19 by marigon2          #+#    #+#             */
/*   Updated: 2024/11/13 03:21:21 by marigon2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

typedef struct s_node
{
	long			data;
	int				index;
	struct s_node	*next;
	struct s_node	*prev;
}					t_node;

typedef struct s_stack
{
	t_node			*head;
	t_node			*tail;
	int				size;
}					t_stack;

// sort_utils

int					count_r(t_node *stack, int index);
int					get_min_index(t_stack *stack);

// ksort

void				k_sort1(t_stack *stack_a, t_stack *stack_b, int length);
void				k_sort2(t_stack *stack_a, t_stack *stack_b, int length);

// sort_d

void				simple_sort(t_stack *stack, int length);
void				sort(t_stack *a, t_stack *b, int *num, int length);

// checks

int					*parse(int argc, char **argv, int count);
int					check_digits(int argc, char **argv);
void				check_range(char **s_numbers, int *numbers);
int					is_sorted(t_stack *stack);
int					is_rot_sort(t_stack *stack, int min_s_index);
t_bool				check_dup(int count, int *num);

// instructions

void				reverse_rotate_both(t_stack *stack_a, t_stack *stack_b,
						t_bool p);
void				swap_both(t_stack *stack1, t_stack *stack2, t_bool p);
void				rotate_both(t_stack *stack_a, t_stack *stack_b, t_bool p);
void				push(t_stack *stack1, t_stack *stack2, char x, t_bool b);
void				push_stack(t_stack *stack1, t_stack *stack2);
void				swap(t_stack *stack, char x, t_bool b);
void				rotate(t_stack *stack, char x, t_bool b);
void				reverse_rotate(t_stack *stack, char x, t_bool b);

// stack utils

t_stack				*ft_new(int num);
int					del_stack(t_stack *stack);
void				ft_add_back(t_stack **stack, t_stack *new_node);
void				ft_add_front(t_stack **stack, t_stack *new_node);
void				ft_load_stack(t_stack **stack, int count, int *num);
void				free_stacks(t_stack *a, t_stack *b);
void				print_stack(t_stack *a, t_stack *b);

#endif
