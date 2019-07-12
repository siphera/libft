/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 05:50:26 by ssalman           #+#    #+#             */
/*   Updated: 2019/07/12 05:50:38 by ssalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *temp;
	t_list *new;
	t_list *start;

	if (!lst || !f)
		return (NULL);
	temp = f(lst);
	new = ft_lstnew(temp->content, temp->content_size);
	if (!new)
		return (NULL);
	lst = lst->next;
	start = new;
	while (lst)
	{
		temp = f(lst);
		new->next = ft_lstnew(temp->content, temp->content_size);
		if (!new->next)
			return (NULL);
		lst = lst->next;
		new = new->next;
	}
	return (start);
}
