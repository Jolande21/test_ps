/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsteenpu <jsteenpu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:22:00 by jsteenpu          #+#    #+#             */
/*   Updated: 2023/09/11 12:07:17 by jsteenpu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// creates a new element of t_list type.
// it should assign data to the given argument and next to NULL

t_list	*ft_create_elem(int	number)
{
	t_list	*new;

	new	= NULL;
	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (0);
	new->value = number;
	new->next = NULL;
	return (new);
}
