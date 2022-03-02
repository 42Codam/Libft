/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/27 20:29:05 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/03/02 14:35:14 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	char	last;
	int		i;
	int		j;

	last = c;
	i = 0;
	j = 0;
	while (s[i])
	{
		if (last == c && s[i] != c)
		{
			j++;
		}
		last = s[i];
		i++;
	}
	return (j);
}

size_t	create_words(char const *s)
{
	char	*sub_s;
	size_t	i;

	i = 0;
	while (s)
	{
		if ((s[i + 1] == c || s[i + 1] == '\0') && s[i] != c)
		{
			sub_s[i + 2] = ft_strlcpy(sub_s, s, i + 2);
			return (sub_s);
		}
		i++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char		**arr;
	char const	*str;
	int			i;
	size_t		j;

	if (!s)
		return (NULL);
	arr = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!arr)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		str = create_word(&s[i]);
		*(arr++) = ft_substr(&str[i], 0, ft_strlen(str[i]));
		if (!s[i])
			arr = NULL;
		i++;
	}
	return (arr);
}

int	main(void)
{
	char	**list;

	list = ft_split("LOL  HAHAHAH      UO Yes!      ", ' ');
	if (list == NULL)
		return (1);
	while (*list)
	{
		printf("%s\n", *list);
		list++;
	}
	return (0);
}
