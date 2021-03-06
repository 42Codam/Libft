/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/22 11:09:48 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/03/30 12:13:11 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_ptr;
	size_t	s_len;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len < len)
		len = s_len;
	sub_ptr = malloc(len + 1);
	if (!sub_ptr)
		return (NULL);
	i = 0;
	while (i < len && (&s[start] < &s[s_len]))
	{
		sub_ptr[i] = s[start + i];
		i++;
	}
	sub_ptr[i] = '\0';
	return (sub_ptr);
}
