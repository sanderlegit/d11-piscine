/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/24 13:47:16 by averheij       #+#    #+#                */
/*   Updated: 2019/09/24 14:03:20 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

int		main(void)
{
	t_list	**begin_list;
	t_list	*first;
	t_list	*curr;

	first = ft_create_elem("first");
	begin_list = &first;
	curr = *begin_list;
	ft_list_push_back(begin_list, "second");
	ft_list_push_back(begin_list, "third");
	ft_list_push_back(begin_list, "fourth");
	while (curr)
	{
		printf("Heres one: %s\n", (char*)(*curr).data);
		curr = (*curr).next;
	}
	printf("Size: %d\n", ft_list_size(*begin_list));
}
