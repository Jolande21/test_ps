/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsteenpu <jsteenpu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:38:52 by jsteenpu          #+#    #+#             */
/*   Updated: 2023/09/05 11:42:07 by jsteenpu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		count;
	t_list	*current;

	count = 0;
	current = begin_list;
	printf("the intial address stored in current: %p\n", current);
	while (current)
	{
		count++;
		current = current->next;
		printf("the new address stored in current: %p\n", current);
	}
	return (count);
}

// int main(void)
// {
// 	int		size;
// 	t_list	*begin_list[6];
// 	t_list	*head;
// 	t_list	*second;
// 	t_list	*third;
// 	t_list	*four;

// 	// create the elements of the list
// 	head = ft_create_elem("first");
// 	second = ft_create_elem("second");
// 	third = ft_create_elem("three");
// 	four = ft_create_elem("four");
	
// 	// link the nodes of the list
// 	head->next = second;
// 	second->next = third;
// 	third->next = four;
	 
// 	size = ft_list_size(head);
// 	printf("%d", size);
// 	return (0);
// }