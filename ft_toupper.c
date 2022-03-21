/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   toupper.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/01 18:09:27 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/02/02 07:42:16 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (ft_isalpha(c))
	{
		if ('A' <= c && c <= 'Z')
		{
			return (c);
		}
		else
		{
			c = c - 32;
		}
	}
	return (c);
}
