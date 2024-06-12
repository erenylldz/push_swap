/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryildiz <eryildiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:18:33 by eryildiz          #+#    #+#             */
/*   Updated: 2024/05/04 19:21:06 by eryildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	split_number(t_data *data)
{
	int		i;

	i = 0;
	data->tmp = ft_split(data->args, ' ');
	while (data->tmp[i])
	{
		data->a[i] = (int)ft_n_atoi(data->tmp[i], data);
		i++;
	}
}

void	start_data(int ac, char **av, t_data *data)
{
	int	i;

	i = 0;
	data->stack_sizea = 0;
	data->stack_sizeb = 0;
	while (--ac)
	{
		if ((count_words(av[i + 1], ' ')) != 0)
			data->stack_sizea += count_words(av[i + 1], ' ');
		else
			data->stack_sizea++;
		i++;
	}
	data->a = malloc(data->stack_sizea * sizeof * data->a);
	if (data->a == NULL)
		ft_free(data, "Error\n");
	data->b = malloc(data->stack_sizea * sizeof * data->b);
	if (data->b == NULL)
		ft_free(data, "Error\n");
}
