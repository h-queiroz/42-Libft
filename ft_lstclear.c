/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hector <hequeiro@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 22:04:20 by hector            #+#    #+#             */
/*   Updated: 2026/05/20 22:15:36 by hector           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*iterator_node;

	iterator_node = *lst;
	while (iterator_node != NULL)
	{
		*lst = iterator_node->next;
		ft_lstdelone(iterator_node, del);
		iterator_node = *lst;
	}
	*lst = NULL;
}
