/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsuji <mtsuji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 10:46:49 by mtsuji            #+#    #+#             */
/*   Updated: 2021/06/11 18:48:30 by mtsuji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	count_space(const char *str)
{
	int	words;
	int	state;

	words = 0;
	while (*str != '\0')
	{
		if (*str != '\t' && *str != ' ')
		{
			words++;
			while (*str != '\t' && *str != ' ' && *str != '\0')
			*str++;
		}
		*str++;
	}
	return (words);
}

static size_t	size_of_word(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0' && (str[i] != '\t' && str[i] != ' '))
		i++;
	return (i);
}

char	**free_split(char **dst, int i)
{
	int	j;

	j = 0;
	while (j < i)
		free(dst[j++]);
	free(dst);
	return (NULL);
}

char	**ft_split(char const *s, int c)
{
	char	**dest;
	int		i;

	if (!s)
		return (NULL);
	dest = malloc(sizeof(char *) * (c + 1));
	if (dest == NULL)
		return (NULL);
	dest[c] = NULL;
	i = -1;
	while (*s)
	{
		if (*s == '\t' || *s == ' ')
			s++;
		else
		{	
			dest[++i] = ft_substr(s, s - &s[0], size_of_word(s));
			if (dest[i] == NULL)
				return (free_split(dest, i));
			s = s + size_of_word((char *)s);
		}
	}
	return ((char**)dest);
}

int				main(void)
{
	char	**tab;
	unsigned int	i;

	i = 0;
	int j;
	char *str = "1     2       3 4     5   6  7     8  9   0";
	j = count_space(str);
	tab = ft_split(str, j);
	if (!tab[0])
		ft_putendl_fd("ok\n", 1);
	while (tab[i] != NULL)
	{
		ft_putendl_fd(tab[i], 1);
		i++;
	}
}