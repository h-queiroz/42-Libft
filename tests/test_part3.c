/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_part3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hector <hequeiro@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 18:53:11 by hector            #+#    #+#             */
/*   Updated: 2026/05/21 00:55:54 by hector           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h" 	// ft_lstnew(), ft_lstadd_front(), ft_lstsize(), ft_lstlast(), ft_lstadd_back(), ft_lstdelone(), ft_lstclear(), ft_lstiter()

#include <assert.h> 	// assert()
#include <stdio.h> 		// printf()

static void	del_content(void *content)
{
	free(content);
}

static void	print_content(void *content)
{
	printf("Printing content: %s\n", (char *)content);
}

static void	*upper_content2(void *content)
{
	char *str = (char *)content;

	while (*str)
	{
		*str = ft_toupper(*str);
		str++;
	}
	return (content);
}

void test_ft_lstmap(void)
{
	t_list *initial_node = NULL;
	t_list *first_node;
	t_list *second_node;
	t_list *third_node;

	
	first_node 	= ft_lstnew(ft_strdup("Let them see your weakness and let them see you overcome it."));
	second_node = ft_lstnew(ft_strdup("One day, you will be old enough to start reading fairytales again."));
	third_node = ft_lstnew(ft_strdup("The purpose of a storyteller is not to tell you how to think, but to give you questions to think upon."));

	initial_node = first_node;

	ft_lstadd_back(&initial_node, second_node);
	ft_lstadd_back(&initial_node, third_node);

	printf("Lista 2 antes:\n\n");
	ft_lstiter(initial_node, &print_content);

	t_list *new_list = ft_lstmap(initial_node, &upper_content2, &del_content);
	printf("Lista 2 depois:\n\n");
	ft_lstiter(new_list, &print_content);

	ft_lstclear(&initial_node, &del_content);
	// ft_lstclear(&new_list, &del_content);
}

static void	upper_content(void *content)
{
	char *str = (char *)content;

	while (*str)
	{
		*str = ft_toupper(*str);
		str++;
	}
}

int main(void)
{
	printf("Initiating tests for Part 3...\n");
	printf("-------------------\n\n");

	t_list *initial_node = NULL;
	t_list *first_node;
	t_list *second_node;
	t_list *third_node;

	// Checking ft_lstnew()
	char *first_content = ft_strdup("This is the initial node of my new list");
	first_node 	= ft_lstnew(first_content);
	char *second_content = ft_strdup("This is the second node");
	second_node = ft_lstnew(second_content);

	initial_node = first_node;

	// Checking ft_lstadd_front()
	ft_lstadd_front(&initial_node, second_node);

	// Checking ft_lstsize()
	printf("List length so far: %d\n", ft_lstsize(initial_node));
	assert(ft_lstsize(initial_node) == 2);

	// Checking ft_lstlast()
	t_list	*last_node_content = ft_lstlast(initial_node);
	// printf("Last node content: \"%s\"\n", (char *)last_node_content->content);
	assert(ft_strncmp((char *)last_node_content->content, first_node->content, 100) == 0);

	// Checking ft_lstadd_back()
	char *third_content = ft_strdup("Third node");
	third_node = ft_lstnew(third_content);
	ft_lstadd_back(&initial_node, third_node);
	last_node_content = ft_lstlast(initial_node);
	// printf("Last node content: \"%s\"\n", (char *)last_node_content->content);
	assert(ft_strncmp((char *)last_node_content->content, third_node->content, 100) == 0);

	// Checking ft_lstiter()
	ft_lstiter(first_node, &upper_content);
	ft_lstiter(initial_node, &print_content);

	// Cleaning all nodes with ft_lstdelone()
	// ft_lstdelone(first_node, &del_content);
	// ft_lstdelone(second_node, &del_content);
	// ft_lstdelone(third_node, &del_content);

	// Cleaning all nodes with ft_lstclear()
	ft_lstclear(&initial_node, &del_content);

	test_ft_lstmap();

	printf("\n-------------------\n");
	printf("All Part 3 tests passed.\n");

	return 0;
}
