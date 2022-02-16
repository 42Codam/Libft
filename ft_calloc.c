/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/14 14:00:56 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/02/15 14:38:09 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	*ptr;

	ptr = malloc(count * size);
	if (!(ptr))
		return (NULL);
	ft_memset(ptr, 0, count * size);
	return (ptr);
}
