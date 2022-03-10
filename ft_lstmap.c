/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 12:06:19 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/03/10 14:37:26 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *))
{
	t_list	**new_lst = NULL;
	t_list	*current_lst;

	if (!lst)
		return (NULL);
	*new_lst = ft_lstnew(lst->content);
	while (lst != NULL)
	{
		current_lst = ft_lstnew(f(lst->content));
		ft_lstadd_back(new_lst, current_lst);
		lst = lst->next;
	}
	return (current_lst);
}