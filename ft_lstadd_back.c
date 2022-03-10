/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_back.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/08 22:22:48 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/03/10 14:07:23 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!new)
		return ;
	if (!*lst)
	{	
		*lst = new;
		return ;
	}
	tmp = ft_lstlast(*lst);
	tmp->next = new;
}

/* 
int	main(void)
{
	t_list	**list;
	t_list	*new;

	list = NULL;
	new = ft_lstnew("joe");
	// if list is null then how do I dereference here?
	ft_lstadd_back(list, new);
	printf("%s\n", (*list)->content);
	return (0);
} */
