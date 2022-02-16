/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/01 12:52:21 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/02/15 15:28:42 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	char	*dest_char;
	char	*src_char;
	size_t	i;

	if (src == NULL && dest == NULL)
		return (NULL);
	dest_char = (char *)dest;
	src_char = (char *)src;
	i = 0;
	while (i < len)
	{
		dest_char[i] = src_char[i];
		i++;
	}
	return (dest);
}
