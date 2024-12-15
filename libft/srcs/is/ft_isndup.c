/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isndup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marigon2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 03:01:38 by marigon2          #+#    #+#             */
/*   Updated: 2024/11/13 03:01:41 by marigon2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_hash_entry	*create_entry(int64_t value)
{
	t_hash_entry	*entry;

	entry = (t_hash_entry *)malloc(sizeof(t_hash_entry));
	if (entry == NULL)
		ft_error("Error\n", 1);
	entry->value = value;
	entry->next = NULL;
	return (entry);
}

static t_bool	in_hash_table(t_hash_entry **table, int64_t value)
{
	size_t			index;
	t_hash_entry	*entry;

	index = (size_t)value % TABLE_SIZE;
	entry = table[index];
	while (entry != NULL)
	{
		if (entry->value == value)
			return (TRUE);
		entry = entry->next;
	}
	return (FALSE);
}

static void	add_to_hash_table(t_hash_entry **table, int64_t value)
{
	size_t			index;
	t_hash_entry	*entry;

	index = (size_t)value % TABLE_SIZE;
	entry = create_entry(value);
	entry->next = table[index];
	table[index] = entry;
}

static void	free_entries(t_hash_entry *entry)
{
	t_hash_entry	*temp;

	while (entry != NULL)
	{
		temp = entry;
		entry = entry->next;
		free(temp);
	}
}

t_bool	ft_isndup(int *num, int size)
{
	t_hash_entry	*table[TABLE_SIZE];
	int				i;
	t_bool			duplicate;
	int64_t			n;

	i = -1;
	duplicate = FALSE;
	while (++i < TABLE_SIZE)
		table[i] = NULL;
	i = -1;
	while (++i < size)
	{
		n = (int64_t)num[i];
		if (in_hash_table(table, n))
		{
			duplicate = TRUE;
			break ;
		}
		add_to_hash_table(table, n);
	}
	i = -1;
	while (++i < TABLE_SIZE)
		free_entries(table[i]);
	return (duplicate);
}
