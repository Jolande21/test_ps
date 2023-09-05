/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsteenpu <jsteenpu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:44:02 by jsteenpu          #+#    #+#             */
/*   Updated: 2023/09/05 11:54:14 by jsteenpu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"


// Create the function ft_list_last which returns the last element of the list.

// t_list	*ft_list_last(t_list *begin_list)
// {
// 	t_list	*temp;

// 	temp = begin_list; // give the address of the first element
// 	while (temp->next)
// 		temp = temp->next;
// 	return (temp);
// }


t_list	*ft_list_last(t_list *begin_list)
{
	if (begin_list->next == 0)
		return (begin_list);
	return (ft_list_last(begin_list->next));
}