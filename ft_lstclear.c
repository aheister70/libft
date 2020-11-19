/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: aheister <aheister@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/17 18:39:52 by aheister      #+#    #+#                 */
/*   Updated: 2020/11/19 12:18:11 by aheister      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;

	if (!*lst || !del)
		return ;
	while (*lst)
	{
		current = *lst;
		*lst = current->next;
		ft_lstdelone(current, del);
	}
	*lst = NULL;
}
