/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/03 13:35:57 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/02/04 09:56:10 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	us_c;
	char			*ptr_s;
	size_t			i;

	ptr_s = (char *)s;
	us_c = c;
	i = 0;
	while (i < n)
	{
		if (ptr_s[i] == us_c)
		{
			return (&ptr_s[i]);
		}
		i++;
	}
	return (NULL);
}
