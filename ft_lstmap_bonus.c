/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmazari <dmazari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:39:23 by dmazari           #+#    #+#             */
/*   Updated: 2024/11/13 15:06:57 by dmazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*save_clear;
	t_list	*save_new;
	t_list	*new;

	if (!lst || !f || !del)
		return (NULL);
	save_clear = lst;
	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	save_new = new;
	new->content = f(lst->content);
	new->next = NULL;
	lst = lst->next;
	while (lst)
	{
		ft_lstadd_back(&new, ft_lstnew(f(lst->content)));
		if (new->next == NULL)
		{
			ft_lstclear(&save_new, del);
			return (NULL);
		}
		lst = lst->next;
	}
	return (save_new);
}
