/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/07 13:16:18 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/02/10 15:49:44 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*p_s1;
	char	*p_s2;

	p_s1 = (char *)s1;
	p_s2 = (char *)s2;
	while (n > 0)
	{
		if (*(p_s1++) != *(p_s2++))
		{
			if (p_s2[-1] < p_s1[-1])
			{
				return (-1);
			}
			else
			{
				return (1);
			}
		}
		n--;
	}
	return (0);
}
