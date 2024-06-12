/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dup_list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryildiz <eryildiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:17:46 by eryildiz          #+#    #+#             */
/*   Updated: 2024/05/04 18:48:10 by eryildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	dup_list(t_data *data, int i)
{
	int	j;

	j = 0;
	if (i == 0)
	{
		while (i < data->stack_sizea)
		{
			j = i + 1;
			while (j < data->stack_sizea)
			{
				if (data->a[i] == data->a[j])
					ft_free(data, "Error\n");
				j++;
			}
			i++;
		}
	}
	if (sorted_array(data))
		ft_free(data, NULL);
}

void	sort_adress(t_data *data)
{
	int		i;
	int		j;
	int		k;
	int		*new;

	new = malloc(data->stack_sizea * sizeof * new);
	if (new == NULL)
		ft_free(data, "Error\n");
	i = -1;
	while (++i < data->stack_sizea)
	{
		k = 0;
		j = -1;
		while (++j < data->stack_sizea)
			if (data->a[i] > data->a[j])
				k++;
		new[i] = k;
	}
	i = data->stack_sizea;
	while (i--)
		data->a[i] = new[i];
	free(new);
}
