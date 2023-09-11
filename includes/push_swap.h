/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsteenpu <jsteenpu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:26:46 by jsteenpu          #+#    #+#             */
/*   Updated: 2023/09/11 12:11:14 by jsteenpu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include "libft.h"

typedef struct s_list
{
	struct s_list	*next;
	int				value;
}	t_list;


/*------------------------------------------------------------------*/

t_list	*ft_list_push_nbr(int number);
void	ft_list_push_back(t_list **begin_list, int number);
t_list	*ft_create_elem(int	number);
t_list	*ft_list_last(t_list *begin_list);

#endif