/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryildiz <eryildiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:18:17 by eryildiz          #+#    #+#             */
/*   Updated: 2024/05/04 19:24:55 by eryildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_data
{
	int		*a;
	int		*b;
	int		stack_sizea;
	int		stack_sizeb;
	char	*args;
	char	**tmp;
}	t_data;

int		ft_isdigit(int c);
void	ft_free(t_data *data, char *txt);
void	arg_check(int argc, char **argv);
void	unite_args(int ac, char **av, t_data *data);
void	dup_list(t_data *data, int i);
void	ft_putendl_fd(char *s, int fd);
long	ft_n_atoi(const char *n, t_data *data);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *src);
size_t	ft_strlen(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	send_number(char *str, t_data *data);
void	radix_sort(t_data *data);
void	sort_stack_b(t_data *data, int b_size, int bit_size, int j);
void	sort_three(t_data *data);
void	five_four(t_data *data);
int		sorted_array(t_data *data);
void	split_number(t_data *data);
void	start_data(int ac, char **av, t_data *data);
void	swap(char *str, int *list, int size);
void	change_queue(int *arr, int size, char *move, char *list);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t len);
int		count_words(char *s, char c);
void	sort_adress(t_data *data);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

#endif
