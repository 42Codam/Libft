/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/07 14:12:36 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/02/08 16:22:41 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		j;
	int		ret;

	i = 0;
	j = 0;
	if (ft_strlen(needle) == 0)
	{
		return ((char *)haystack);
	}
	while (i < len)
	{
		if (haystack[i] == needle[j])
		{
			ret = ft_strncmp(&haystack[i], &needle[j], ft_strlen(needle));
			if (ret == 0)
			{
				return (&((char *)haystack)[i]);
			}
			j = 0;
		}
		i++;
	}
	return (NULL);
}
