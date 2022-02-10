/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/02 11:06:21 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/02/03 11:20:50 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*pstr;

	pstr = (char *)s;
	i = ft_strlen(s) - 1;
	while (i != 0)
	{
		if (s[i] == c)
		{
			return (&pstr[i]);
		}
		i--;
	}
	return (NULL);
}
