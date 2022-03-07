/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/04 16:23:35 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/03/06 19:16:09 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	recur(unsigned int n, int fd)
{
	char	c;

	if (n > 9)
		recur(n / 10, fd);
	c = (n % 10) + 48;
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		n *= -1;
		write(fd, "-", 1);
	}
	recur ((unsigned int)n, fd);
}

/* int	main(void)
{
	ft_putnbr_fd(-2147483648, 1);
	return (0);
} */
