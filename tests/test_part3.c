/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_part3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hector <hequeiro@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 18:53:11 by hector            #+#    #+#             */
/*   Updated: 2026/05/20 20:46:17 by hector           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h" 	// ft_lstnew(), ft_lstadd_front(), ft_lstsize(), ft_lstlast(), ft_lstadd_back()

#include <assert.h> 	// assert()
#include <stdio.h> 		// printf()

int main(void)
{
	printf("Initiating tests for Part 3...\n");
	printf("-------------------\n\n");

	t_list *initial_node = NULL;
	t_list *first_node;
	t_list *second_node;
	t_list *third_node;

	// Checagem ft_lstnew()
	first_node 	= ft_lstnew("This is the initial node of my new list");
	second_node = ft_lstnew("Second node of the list");

	initial_node = first_node;

	// Checagem ft_lstadd_front()
	ft_lstadd_front(&initial_node, second_node);

	// Checagem ft_lstsize()
	printf("List length so far: %d\n", ft_lstsize(initial_node));
	assert(ft_lstsize(initial_node) == 2);

	// Checagem ft_lstlast()
	char *last_node_content = (char *)ft_lstlast(initial_node)->content;
	printf("Last node content: \"%s\"\n", last_node_content);
	assert(ft_strncmp(last_node_content, first_node->content, 100) == 0);

	// Checagem ft_lstadd_back()
	third_node = ft_lstnew("Third node");
	ft_lstadd_back(&initial_node, third_node);
	last_node_content = (char *)ft_lstlast(initial_node)->content;
	printf("Last node content: \"%s\"\n", last_node_content);
	assert(ft_strncmp(last_node_content, third_node->content, 100) == 0);

	// Cleaning all nodes
	free(first_node);
	free(second_node);

	printf("\n-------------------\n");
	printf("All Part 3 tests passed.\n");

	return 0;
}
