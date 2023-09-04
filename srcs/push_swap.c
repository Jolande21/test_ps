/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsteenpu <jsteenpu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 17:08:14 by jsteenpu          #+#    #+#             */
/*   Updated: 2023/09/04 14:37:36 by jsteenpu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_node	ft_list_new_element(int	number)
{
	t_node	*created;
	
	created = NULL;
	created = (t_node)malloc(sizeof(t_node));
	if (created)
	{
		created->value = number;
		created->next = NULL;
	}
	return (created);
}

int	main(int argc, char **argv)
{
	char	**split_argv;
	int		i;
	t_node	number;
	t_node	*head;

	if (argc == 1)
		return (0);
		
	// this works when there is only 1 string as input ?
	if (argc == 2)
		split_argv = ft_split(argv[1], ' ');
	// print the string stored in split_argv
	i = 0;
	while (split_argv[i])
	{
		printf("%s\n", split_argv[i]);
		i++;
	}
	// if args is more than 2?
	head = &argv[1];
	i = 0;
	while (argv[i])
	{
		number.value = ft_atoi(argv[i]);
		i++;
	}
	
	return (0);
}