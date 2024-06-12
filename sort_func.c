/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryildiz <eryildiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:18:29 by eryildiz          #+#    #+#             */
/*   Updated: 2024/05/02 17:18:30 by eryildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_data *data)
{
	if (data->a[2] != 2)
	{
		if (data->a[0] == 2)
			change_queue(data->a, data->stack_sizea, "up", "a");
		else
			change_queue(data->a, data->stack_sizea, "down", "a");
	}
	if (data->a[0] > data->a[1])
		swap("sa", data->a, data->stack_sizea);
}

void	five_four(t_data *data)
{
	while (data->stack_sizeb <= 1)
	{
		if (data->a[0] == 0 || data->a[0] == 1)
			send_number("pb", data);
		else
			change_queue(data->a, data->stack_sizea, "up", "a");
	}
	if (data->b[0] == 0)
		swap("sb", data->b, data->stack_sizeb);
	if (data->a[2] != 4)
	{
		if (data->a[0] == 4)
			change_queue(data->a, data->stack_sizea, "up", "a");
		else
			change_queue(data->a, data->stack_sizea, "down", "a");
	}
	if (data->a[0] > data->a[1])
		swap("sa", data->a, data->stack_sizea);
	send_number("pa", data);
	send_number("pa", data);
}

int	sorted_array(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->stack_sizea - 1)
	{
		if (data->a[i] > data->a[i + 1])
			return (0);
		i++;
	}
	return (1);
}
