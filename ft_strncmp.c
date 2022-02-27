/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/03 12:56:59 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/02/21 11:07:18 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* 
	 * We set i to 0 to place us at the beginning of our string when we start our
	 * loop. We then check to see if our given n is equal to 0. If it is we
	 * return 0. If not we begin our loop which requires three conditions to be
	 * true in order to happen. We want our loop to happen as long as our string
	 * has not reached it's end AND while the character at position i in s1 is
	 * the same as the character at position i in s2 AND while our counter 
	 * variable i is less than n - 1. We subtract 1 from the given n because
	 * a size_t variable is often used for a memory allocation function and will
	 * be the full size of the string. We subtract 1 to compensate for the fact
	 * that the given size_t is not supposed to be given as 0. If we find a 
	 * difference in characters, or our i variable becomes the same size as n
	 * minus 1, or we reach the end of s1, we finish the loop. We then return
	 * the difference between the current character in s1 at position i from the
	 * current character in s2 at position i. NOTE: We cast the characters as
	 * unsigned characters just like the man explained.
*/
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
