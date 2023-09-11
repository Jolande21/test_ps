/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsteenpu <jsteenpu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 10:55:54 by jsteenpu          #+#    #+#             */
/*   Updated: 2023/09/11 12:11:59 by jsteenpu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// add a new element of type t_list at the end of the list

void	ft_list_push_back(t_list **begin_list, int number)
{
	t_list	*new;
	t_list	*last;

	new = ft_create_elem(number);
	if (!new)
		return ;
	if (*begin_list == NULL)
		*begin_list = new;
	else
	{
		last = ft_list_last(*begin_list);
		last->next = new;
	}		
}