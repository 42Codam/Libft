/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/31 13:35:23 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/02/01 12:54:12 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // The first 32 characters in the ASCII-table are unprintable

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
