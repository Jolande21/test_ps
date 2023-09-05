/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsteenpu <jsteenpu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:25:21 by jsteenpu          #+#    #+#             */
/*   Updated: 2023/09/05 11:44:36 by jsteenpu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stdio.h>
# include <stdlib.h>

typedef struct s_list
{
	void	*data;
	void	*next;
} t_list;


t_list	*ft_create_elem(void *data);
t_list	*ft_list_last(t_list *begin_list);
int		ft_list_size(t_list *begin_list);

#endif