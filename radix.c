/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryildiz <eryildiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:18:25 by eryildiz          #+#    #+#             */
/*   Updated: 2024/05/02 17:18:26 by eryildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_data *data)
{
	int	j;
	int	bit_size;
	int	size;

	bit_size = 0;
	size = data->stack_sizea;
	while (size > 1 && ++bit_size)
		size /= 2;
	j = -1;
	while (++j <= bit_size)
	{
		size = data->stack_sizea;
		while (size-- && !sorted_array(data))
		{
			if (((data->a[0] >> j) & 1) == 0)
				send_number("pb", data);
			else
				change_queue(data->a, data->stack_sizea, "up", "a");
		}
		sort_stack_b(data, data->stack_sizeb, bit_size, j + 1);
	}
	while (data->stack_sizeb != 0)
		send_number("pa", data);
}

void	sort_stack_b(t_data *data, int b_size, int bit_size, int j)
{
	while (b_size-- && j <= bit_size && !sorted_array(data))
	{
		if (((data->b[0] >> j) & 1) == 0)
			change_queue(data->b, data->stack_sizeb, "up", "b");
		else
			send_number("pa", data);
	}
	if (sorted_array(data))
		while (data->stack_sizeb != 0)
			send_number("pa", data);
}
