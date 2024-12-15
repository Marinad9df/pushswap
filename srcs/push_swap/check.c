/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marigon2 <marigon2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 16:36:23 by marigon2          #+#    #+#             */
/*   Updated: 2024/11/13 01:38:21 by marigon2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	count_valid_numbers(const char *str)
{
	int		j;
	int		count;
	char	c;

	j = 0;
	count = 0;
	while (str[j] != '\0')
	{
		c = str[j];
		if (ft_isdigit(c))
		{
			count++;
			while (ft_isdigit(str[j]))
				j++;
		}
		else
			j++;
	}
	return (count);
}

static int	validate_tokens(const char *str)
{
	int		j;
	char	c;

	j = 0;
	while (str[j] != '\0')
	{
		c = str[j];
		if (c == '-' || c == '+')
		{
			if (!ft_isdigit(str[j + 1]) || str[j + 1] == '\0' || (j > 0
					&& ft_isdigit(str[j - 1])))
				return (0);
		}
		else if (!ft_isdigit(c) && !ft_isspace(c))
			return (0);
		j++;
	}
	return (1);
}

int	check_digits(int argc, char **argv)
{
	int	i;
	int	count;

	i = 1;
	count = 0;
	while (i < argc)
	{
		if (!validate_tokens(argv[i]))
			ft_error("Error\n", 1);
		count += count_valid_numbers(argv[i]);
		i++;
	}
	return (count);
}

static int	ft_check_len(char *numbers)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (numbers[i] == '+' || numbers[i] == '-')
		i++;
	while (numbers[i] == '0')
		i++;
	while (numbers[i])
	{
		i++;
		count++;
	}
	if (count >= 11)
		return (-1);
	return (count);
}

void	check_range(char **s_numbers, int *numbers)
{
	int	i;

	i = 0;
	while (s_numbers[i])
	{
		if (ft_atoll(s_numbers[i]) > INT_MAX || ft_atoll(s_numbers[i]) < INT_MIN
			|| ft_check_len(s_numbers[i]) > 11)
		{
			free_2d(s_numbers);
			free(numbers);
			ft_error("Error\n", 1);
		}
		i++;
	}
}
