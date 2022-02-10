/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/01 12:52:21 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/02/09 08:24:54 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	char	*char_dst;
	char	*char_src;
	size_t	i;

	char_dst = (char *)dest;
	char_src = (char *)src;
	i = 0;
	while (i < len)
	{
		char_dst[i] = char_src[i];
		i++;
	}
	return (dest);
}
