/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: aheister <aheister@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/17 19:59:17 by aheister      #+#    #+#                 */
/*   Updated: 2020/11/19 12:36:00 by aheister      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new;

	if (!lst || !*f || !del)
		return (0);
	new_lst = 0;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (new == 0)
			ft_lstclear(&new_lst, del);
		ft_lstadd_back(&new_lst, new);
		lst = lst->next;
	}
	return (new_lst);
}
