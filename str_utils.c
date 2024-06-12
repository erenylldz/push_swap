/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryildiz <eryildiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:18:40 by eryildiz          #+#    #+#             */
/*   Updated: 2024/05/02 17:18:41 by eryildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_words(char *s, char c)
{
	int	wordcount;

	wordcount = 0;
	while (*s)
	{
		if (*s != c)
		{
			wordcount++;
			while (*s != c && *s)
				s++;
		}
		else
			s++;
	}
	return (wordcount);
}

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	a;

	if (dest == src)
		return (dest);
	d = (char *)dest;
	s = (char *)src;
	a = 0;
	if (s < d)
	{
		while (len-- > 0)
		{
			d[len] = s[len];
		}
	}
	else
	{
		while (a < len)
		{
			d[a] = s[a];
			a++;
		}
	}
	return (dest);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = -1;
	d = (char *)dest;
	s = (char *)src;
	if (dest == src)
		return (dest);
	while (++i < n)
		d[i] = s[i];
	return (dest);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
