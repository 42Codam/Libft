/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/22 12:33:40 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/02/24 14:27:25 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s_ptr;
	size_t	s_ptr_len;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	s_ptr_len = s1_len + s2_len;
	s_ptr = malloc(s_ptr_len + 1);
	if (!s_ptr)
		return (NULL);
	ft_memmove(s_ptr, s1, s1_len);
	ft_strlcpy(&s_ptr[s1_len], s2, s2_len + 1);
	return (s_ptr);
}
