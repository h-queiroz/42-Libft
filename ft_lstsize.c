/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hector <hequeiro@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 19:18:03 by hector            #+#    #+#             */
/*   Updated: 2026/05/20 19:23:55 by hector           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		len;
	t_list	*iterator_node;

	len = 0;
	iterator_node = lst;
	while (iterator_node != NULL)
	{
		iterator_node = iterator_node->next;
		len++;
	}
	return (len);
}
