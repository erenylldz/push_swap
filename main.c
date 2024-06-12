/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryildiz <eryildiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:18:14 by eryildiz          #+#    #+#             */
/*   Updated: 2024/05/04 18:48:23 by eryildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_data	*data;

	arg_check(ac, av);
	data = malloc(sizeof(t_data));
	if (!data)
		exit (1);
	start_data(ac, av, data);
	unite_args(ac, av, data);
	split_number(data);
	dup_list(data, 0);
	sort_adress(data);
	if (data->stack_sizea == 2 && data->a[0] > data->a[1])
		swap("sa", data->a, data->stack_sizea);
	else if (data->stack_sizea == 3)
		sort_three(data);
	else if (data->stack_sizea >= 4 && data->stack_sizea <= 5)
		five_four(data);
	else
		radix_sort(data);
	dup_list(data, 1);
	ft_free(data, "Error\n");
}
