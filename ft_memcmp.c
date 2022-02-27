/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/07 13:16:18 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/02/21 11:43:39 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p_s1;
	unsigned char	*p_s2;
	size_t			i;

	p_s1 = (unsigned char *)s1;
	p_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p_s1[i] == p_s2[i])
		{
			i++;
			continue ;
		}
		else if (p_s2[i] < p_s1[i])
			return ((p_s1[i] - p_s2[i]));
		else
			return ((p_s2[i] - p_s1[i]));
		i++;
	}
	return (0);
}

/* int main () {
  char *str1 = "atoms\0\0\0\0";
  char *str2 = "atoms\0abc";
  int ret;

  ret = ft_memcmp(str1, str2, 7);

  if(ret > 0) {
    printf("str2 is less than str1");
  } else if(ret < 0) {
    printf("str1 is less than str2");
  } else {
    printf("str1 is equal to str2");
  }
   return(0);
} */
