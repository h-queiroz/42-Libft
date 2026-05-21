/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_part3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hector <hequeiro@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 18:53:11 by hector            #+#    #+#             */
/*   Updated: 2026/05/20 22:15:02 by hector           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h" 	// ft_lstnew(), ft_lstadd_front(), ft_lstsize(), ft_lstlast(), ft_lstadd_back(), ft_lstdelone(), ft_lstclear()

#include <assert.h> 	// assert()
#include <stdio.h> 		// printf()
#include <string.h>		// strdup()

void	del_content(void *content)
{
	free(content);
}

int main(void)
{
	printf("Initiating tests for Part 3...\n");
	printf("-------------------\n\n");

	t_list *initial_node = NULL;
	t_list *first_node;
	t_list *second_node;
	t_list *third_node;

	// Checagem ft_lstnew()
	char *first_content = ft_strdup("This is the initial node of my new list");
	first_node 	= ft_lstnew(first_content);
	char *second_content = ft_strdup("This is the initial node of my new list");
	second_node = ft_lstnew(second_content);

	initial_node = first_node;

	// Checagem ft_lstadd_front()
	ft_lstadd_front(&initial_node, second_node);

	// Checagem ft_lstsize()
	printf("List length so far: %d\n", ft_lstsize(initial_node));
	assert(ft_lstsize(initial_node) == 2);

	// Checagem ft_lstlast()
	t_list	*last_node_content = ft_lstlast(initial_node);
	printf("Last node content: \"%s\"\n", (char *)last_node_content->content);
	assert(ft_strncmp((char *)last_node_content->content, first_node->content, 100) == 0);

	// Checagem ft_lstadd_back()
	char *third_content = ft_strdup("Third node");
	third_node = ft_lstnew(third_content);
	ft_lstadd_back(&initial_node, third_node);
	last_node_content = ft_lstlast(initial_node);
	printf("Last node content: \"%s\"\n", (char *)last_node_content->content);
	assert(ft_strncmp((char *)last_node_content->content, third_node->content, 100) == 0);

	// Cleaning all nodes with ft_lstdelone()
	// ft_lstdelone(first_node, &del_content);
	// ft_lstdelone(second_node, &del_content);
	// ft_lstdelone(third_node, &del_content);

	// Cleaning all nodes with ft_lstclear()
	ft_lstclear(&initial_node, &del_content);

	printf("\n-------------------\n");
	printf("All Part 3 tests passed.\n");

	return 0;
}
