/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/11 10:41:47 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/02/15 16:54:48 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#define SIZE 6

int check_white_spaces(char str)
{
	const char	white_spaces[SIZE] = {' ', '\t', '\n', '\v', '\f', '\r'};
	int i;

	i = 0;
	while(i < 6)
	{
		if(str == white_spaces[i])
		{
			return(1);
		}
		i++;
	}
	return (0);
}


int	ft_atoi(const char *str)
{
	int i;
	int converted;
	
	i = 0;
	converted = 0;
	if (check_white_spaces(str[i]))
	{
		i++;
		continue ;
	}
	while (str[i] != '\0')
	{
		else if (ft_isdigit(str[i]))
		{
			if(str[i] == '-')
			{
				write(1, "-", 1);
			}
			converted = (str[i] - '0') + (converted * 10);
			if(!ft_isdigit(str[i + 1]))
			{
				return converted;
			}
		}
		i++;
	}
	return converted;
}

int main () {
   int val;
   char str[20] = "igksgk  dvhjksdvdf _*&ˆ%&*() -2147483648";
   char str1[20] = "tutorialspoint.com";
   
   val = ft_atoi(str);
   printf("%d\n", val);
   val = ft_atoi(str1);
   printf("String value = %s, Int value = %d\n", str1, val);

   return(0);
}