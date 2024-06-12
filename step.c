/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   step.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryildiz <eryildiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:18:36 by eryildiz          #+#    #+#             */
/*   Updated: 2024/05/04 15:58:46 by eryildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(char *str, int *list, int size)
{
	int	temp;

	if (size <= 0)
		return ;
	temp = list[0];
	list[0] = list[1];
	list[1] = temp;
	ft_putendl_fd(str, 1);
}

void	change_queue(int *arr, int size, char *move, char *list)
{
	int	tmp;

	if (size < 0)
		return ;
	if (ft_strncmp(move, "up", 5) == 0)
	{
		tmp = arr[0];
		ft_memmove(arr, arr + 1, sizeof(int) * (size - 1));
		arr[size - 1] = tmp;
		write(1, "r", 1);
	}
	else if (ft_strncmp(move, "down", 5) == 0)
	{
		tmp = arr[size - 1];
		ft_memmove(arr + 1, arr, sizeof(int) * (size - 1));
		arr[0] = tmp;
		write(1, "rr", 2);
	}
	ft_putendl_fd(list, 1);
}
