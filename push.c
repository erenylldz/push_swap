/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryildiz <eryildiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:18:21 by eryildiz          #+#    #+#             */
/*   Updated: 2024/05/02 17:18:22 by eryildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	send_number(char *str, t_data *data)
{
	int	tmp;

	if (ft_strncmp(str, "pa", 3) == 0)
	{
		if (data->stack_sizeb <= 0)
			return ;
		tmp = data->b[0];
		ft_memmove(data->a + 1, data->a, sizeof(int) * data->stack_sizea);
		data->a[0] = tmp;
		data->stack_sizeb--;
		ft_memmove(data->b, data->b + 1, sizeof(int) * data->stack_sizeb);
		data->stack_sizea++;
	}
	else if (ft_strncmp(str, "pb", 3) == 0)
	{
		if (data->stack_sizea <= 0)
			return ;
		tmp = data->a[0];
		ft_memmove(data->b + 1, data->b, sizeof(int) * data->stack_sizeb);
		data->b[0] = tmp;
		data->stack_sizea--;
		ft_memmove(data->a, data->a + 1, sizeof(int) * data->stack_sizea);
		data->stack_sizeb++;
	}
	ft_putendl_fd(str, 1);
}
