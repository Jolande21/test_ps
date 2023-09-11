/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsteenpu <jsteenpu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 17:08:14 by jsteenpu          #+#    #+#             */
/*   Updated: 2023/09/11 12:24:17 by jsteenpu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// creates a list that includes all the integers provided as arg
t_list	*ft_list_push_nbr(int number)
{
	t_list	*list;

	list = NULL;
	printf("the address of list: %p\n", list);
	ft_list_push_back(&list, number);
	return (list);
}

int	main(int argc, char **argv)
{
	char	**temp;
	int		i;
	int		j;
	int		number;
	t_list	**stack;

	if (argc == 1)
		return (-1);
	
	// when the set of integer values are provided in 1 arg as a string
	if (argc == 2)
	{
		temp = ft_split(argv[1], ' ');
		if (!temp)
			return (-1);
	}
	else
	{
		i = 1;
		while (argv[i])
			i++;
		stack = (t_list *)malloc(sizeof(t_list) * i);
		if (!stack)
			return (-1);
		i = 1;
		j = 0;
		while (argv[i])
		{
			number = ft_atoi(argv[i]);

			// will create a new list with the numbers provided as arguments
			stack[j] = ft_list_push_nbr(number);
			i++;
			j++;
		}
	}
	return (0);
}
