/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsteenpu <jsteenpu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:38:52 by jsteenpu          #+#    #+#             */
/*   Updated: 2023/09/04 15:10:49 by jsteenpu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		count;
	t_list	*current;

	count = 0;
	current = begin_list;
	while (current)
	{
		count++;
		current = current->next;
	}
	return (count);
}

// int main(void)
// {
// 	int		size;
// 	t_list	*head;
// 	t_list	*second;
// 	t_list	*third;
// 	t_list	*four;

// 	head = ft_create_elem("first");
// 	second = ft_create_elem("second");
// 	third = ft_create_elem("three");
// 	four = ft_create_elem("four");
	
// 	head->next = second;
// 	second->next = third;
// 	third->next = four;
	 
// 	size = ft_list_size(head);
// 	printf("%d", size);
// 	return (0);
// }