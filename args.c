/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryildiz <eryildiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:17:42 by eryildiz          #+#    #+#             */
/*   Updated: 2024/05/04 18:52:13 by eryildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(t_data *data, char *str)
{
	int	i;

	i = -1;
	if (str)
		write(2, str, ft_strlen(str));
	if (data)
	{
		if (data->args)
			free(data->args);
		if (data->a)
			free(data->a);
		if (data->b)
			free(data->b);
		if (data->tmp && data->tmp[0])
		{
			while (data->tmp[++i])
				free(data->tmp[i]);
			free(data->tmp);
		}
		else if (data->tmp)
			free(data->tmp);
		if (data)
			free(data);
	}
	exit(1);
}

void	arg_check(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	if (argc < 2)
		ft_free(NULL, "Error\n");
	while (++i < argc)
	{
		j = 0;
		if (!argv[i][0] || argv[i][0] == ' ')
			ft_free(NULL, "Error\n");
		while (argv[i][j] != '\0')
		{
			if ((!(ft_isdigit(argv[i][j])) && (argv[i][j] != ' ')
			&& (argv[i][j] != '-' && argv[i][j] != '+' && argv[i][j] != ' '))
			|| (argv[i][j] == '-' && argv[i][j + 1] == '\0')
			|| (argv[i][j] == '+' && argv[i][j + 1] == '\0')
			|| (argv[i][j] == '-' && argv[i][j + 1] == ' ')
			|| (argv[i][j] == '+' && argv[i][j + 1] == ' '))
				ft_free(NULL, "Error\n");
			j++;
		}
	}
}

void	unite_args(int ac, char **av, t_data *data)
{
	char	*tmp;
	char	*tmp2;
	int		i;

	i = 0;
	tmp2 = ft_strdup("");
	while (++i < ac && av[1])
	{
		tmp = ft_strjoin(tmp2, av[i]);
		if (tmp2)
			free(tmp2);
		if (i != ac -1)
		{
			tmp2 = ft_strjoin(tmp, " ");
			if (tmp)
				free(tmp);
			tmp = tmp2;
		}
	}
	data->args = ft_strdup(tmp);
	if (data->args == NULL)
		ft_free(data, "Error\n");
	if (tmp)
		free(tmp);
}
