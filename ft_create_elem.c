/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsteenpu <jsteenpu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:22:00 by jsteenpu          #+#    #+#             */
/*   Updated: 2023/09/04 15:09:21 by jsteenpu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

// creates a new element of t_list type.
// it should assign data to the given argument and next to NULL

t_list	*ft_create_elem(void *data)
{
	t_list	*created;

	created	= NULL;
	created = (t_list *)malloc(sizeof(t_list));
	if (!created)
		return (0);
	created->data = data;
	created->next = NULL;
	return (created);
}
