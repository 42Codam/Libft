/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By:                                              +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/02 08:30:30 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/02/15 16:36:36 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			return (&((char *)s)[i] );
		else if (s[i + 1] == '\0' && (unsigned char)c == '\0')
			return (&((char *)s)[i+1]);
		i++;
	}
	return (0);
}
