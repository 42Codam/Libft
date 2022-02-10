/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By:                                              +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/02 08:30:30 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/02/03 18:25:56 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	us_c;
	char			*ptr_s;

	ptr_s = (char *)s;
	us_c = c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == us_c)
		{
			return (&ptr_s[i]);
		}
		i++;
	}
	return (NULL);
}
