/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsteenpu <jsteenpu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:44:02 by jsteenpu          #+#    #+#             */
/*   Updated: 2023/09/11 12:07:22 by jsteenpu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"


// Create the function ft_list_last which returns the last element of the list.

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*temp;

	temp = begin_list; // give the address of the first element
	while (temp->next)
		temp = temp->next;
	return (temp);
}
