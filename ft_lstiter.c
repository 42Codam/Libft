/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstiter.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 11:51:18 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/03/14 09:21:27 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/* 
int	main(void)
{
	t_list	*new;
	void	*ptr;
	int		num;

	ptr = &num;
	new = ft_lstnew(ptr);
	printf("%i",((int)new)->content);
	
	return (0);
} */