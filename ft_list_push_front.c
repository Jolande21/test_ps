/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsteenpu <jsteenpu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:11:31 by jsteenpu          #+#    #+#             */
/*   Updated: 2023/09/05 11:52:40 by jsteenpu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

// Create the function ft_list_push_front 
// which adds a new element of type t_list
// to the beginning of the list.
// It should assign data to the given argument.
// If necessary, it’ll update the pointer at the beginning of the list.


void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new;
	
	// create the a new struct to store the data of the new element
	new = ft_create_elem(data);
	//printf("the address of the new element: %p\n", new);
	
	// the next address is the address of the first element of the list
	new->next = *begin_list;
	//printf("the address in begin_list = the 'new' next: %p\n", *begin_list);

	// point the head of the list to the newly added element of the list
	*begin_list = new;
	//printf("the new address of the head: %p\n", *begin_list);	
}

int	main(void)
{
	t_list	*element;
	t_list	*last_element;
	int	first;
	int	second;
	int	size;

	first = 19;
	second = 42;

	element = ft_create_elem((void *)&first);
	printf("the address of the first element: \t%p\n", element);
	printf("the data stored in the first element: \t%d\n", *(int *)(element->data));
	printf("the address stored in the next pointer: %p\n", element->next);

	ft_list_push_front(&element, (void *)&second);
	printf("the address of the first element after: %p\n", element);
	printf("the data stored in the first element: \t%d\n", *(int *)(element->data));
	printf("the address stored in the next pointer: %p\n", element->next);

	size = ft_list_size(element);
	printf("%d\n", size);
	
	last_element = ft_list_last(element);
	printf("the address of the last element: %p\n", last_element);

	return (0);
}