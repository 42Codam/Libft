/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/01 13:47:42 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/02/15 15:29:31 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*p_src = (char *)src;
	char	*p_dst = (char *)dst;

		if (src == NULL && dst == NULL)
		return (NULL);

	p_src = (char *)src;
	p_dst = (char *)dst;
	if (dst < src)
	{
		return (ft_memcpy(dst, src, len));
	}
	else
	{
		i = len;
		while (i > 0)
		{
			p_dst[i - 1] = p_src[i - 1];
			i--;
		}
	}
	return (dst);
}
