/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_n_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryildiz <eryildiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:17:55 by eryildiz          #+#    #+#             */
/*   Updated: 2024/05/04 20:10:56 by eryildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_n_atoi(const char *n, t_data *data)
{
	int		i;
	long	sign;
	long	res;

	res = 0;
	sign = 1;
	i = 0;
	while (n[i] == ' ' || (n[i] >= '\t' && n[i] <= '\r'))
		i++;
	if ((n[i] == '+' || n[i] == '-'))
	{
		if (n[i] == '-')
			sign = -1;
		i++;
	}
	while (n[i])
	{
		if (!(n[i] >= '0' && n[i] <= '9'))
			ft_free(data, "Error\n");
		res = res * 10 + (n[i++] - '0');
	}
	if ((res * sign) > 2147483647 || (res * sign) < -2147483648
		|| ft_strlen(n) > 11)
		ft_free(data, "Error\n");
	return (res * sign);
}
