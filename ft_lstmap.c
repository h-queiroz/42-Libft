/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hector <hequeiro@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 22:39:48 by hector            #+#    #+#             */
/*   Updated: 2026/05/25 07:50:00 by hequeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_list;
	t_list *new_node;
	t_list *previous_node;

	new_list = NULL;
	while (lst != NULL)
	{
		// printf("\n******************\n");
		// printf("Printing content: %s\n", (char *)lst->content);
		// printf("******************\n\n");

		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			del(new_node->content);
			ft_lstclear(&new_list, del);
			new_list = NULL;
			break;
		}
		if (new_list == NULL)
		{
			new_list = new_node;
			previous_node = new_list;
		}
		else
		{
			previous_node->next = new_node;
			previous_node = new_node;
		}
		lst = lst->next;
	}
	return (new_list);
}
