/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_part3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hector <hequeiro@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 18:53:11 by hector            #+#    #+#             */
/*   Updated: 2026/05/20 19:26:18 by hector           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h" 	// ft_lstnew(), ft_lstadd_front(), ft_lstsize()

#include <assert.h> 	// assert()
#include <stdio.h> 		// printf()

int main(void)
{
	printf("Initiating tests for Part 3...\n");
	printf("-------------------\n\n");

	t_list *lista = NULL;
	t_list *first_node;
	t_list *second_node;

	first_node 	= ft_lstnew("This is the initial node of my new list");
	second_node = ft_lstnew("Second node of the list");

	lista = first_node;

	ft_lstadd_front(&lista, second_node);

	printf("List length so far: %d\n", ft_lstsize(lista));
	assert(ft_lstsize(lista) == 2);

	free(first_node);
	free(second_node);

	printf("\n-------------------\n");
	printf("All Part 3 tests passed.\n");

	return 0;
}
