/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/27 20:29:05 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/03/03 13:59:59 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
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

static char	*create_words(char const *s, char c)
{
	char	*sub_s;
	size_t	i;

	i = 0;
	while (s)
	{
		if ((s[i + 1] == c || s[i + 1] == '\0') && s[i] != c)
		{
			sub_s = malloc(sizeof(char) * (i + 2));
			ft_strlcpy(sub_s, s, i + 2);
			return (sub_s);
		}
		i++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;

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
		if (s[i] == '\0')
			break ;
		arr[j] = create_words(&s[i], c);
		i += ft_strlen(arr[j]);
		j++;
	}
	arr[j] = NULL;
	return (arr);
}

/* int    main(void)
{
    char    **list;

    list = ft_split("    LOL  HAHAHAH      UO Yes!      ", ' ');
    if (list == NULL)
        return (1);
    while (*list)
    {
        printf("%s\n", *list);
        list++;
    }
	// system("leaks a.out");
    return (0);
} */