/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsteenpu <jsteenpu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 17:08:14 by jsteenpu          #+#    #+#             */
/*   Updated: 2023/09/05 10:25:59 by jsteenpu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_node	*ft_list_new_element(int number)
{
	t_node	*new;
	
	new = NULL;
	new = (t_node *)malloc(sizeof(t_node));
	if (new)
		return (0);
	new->value = number;
	new->next = NULL;
	return (new);
}

int	main(int argc, char **argv)
{
	char	**split_argv;
	int		i;
	int		number;
	t_node	*element;

	if (argc == 1)
		return (0);
		
	// this works when there is only 1 string as input ?
	if (argc == 2)
		split_argv = ft_split(argv[1], ' ');
	// print the string stored in split_argv
	// i = 0;
	// while (split_argv[i])
	// {
	// 	printf("%s\n", split_argv[i]);
	// 	i++;
	// }
	// if args is more than 2?
	i = 1;
	while (argv[i])
	{
		number = ft_atoi(argv[i]);
		// check if the return of the atoi is indeed an int number
		// is digit f.e
		// what about 0 ?? 
		element = ft_list_new_element(number);
		i++;
	}
	return (0);
}