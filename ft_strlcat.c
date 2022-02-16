/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/09 06:51:11 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/02/11 15:10:40 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dssize)
{
	int		i;
	size_t	dst_len;
	int		src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	while (src[i] != '0')
	{
		if (dst_len + i == dssize - 1)
		{
			dst[dst_len + i] = '\0';
			break ;
		}
		dst[dst_len + i] = src[i];
		i++;
	}
	return (dst_len + src_len);
}
