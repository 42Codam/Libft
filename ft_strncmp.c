/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/03 12:56:59 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/02/08 09:36:07 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		char_compare_status;

	i = 0;
	char_compare_status = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		char_compare_status = s1[i] - s2[i];
		if (char_compare_status == 0)
		{
			i++;
			continue ;
		}
		else
		{
			char_compare_status = s1[i] - s2[i];
			break ;
		}
		i++ ;
	}
	return (char_compare_status);
}
