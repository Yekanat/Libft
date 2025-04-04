/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athekkan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 22:02:53 by athekkan          #+#    #+#             */
/*   Updated: 2023/02/10 22:14:39 by athekkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_list_start;
	t_list	*temp;

	if (!lst || !f || !del)
		return (NULL);
	temp = lst;
	new_list = ft_lstnew(f(temp->content));
	if (!new_list)
		return (NULL);
	new_list_start = new_list;
	temp = temp->next;
	while (temp)
	{
		new_list->next = ft_lstnew(f(temp->content));
		if (!new_list->next)
		{
			ft_lstclear(&new_list_start, del);
			return (NULL);
		}
		new_list = new_list->next;
		temp = temp->next;
	}
	return (new_list_start);
}
