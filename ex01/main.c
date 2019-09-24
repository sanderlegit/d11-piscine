/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/24 12:48:08 by averheij       #+#    #+#                */
/*   Updated: 2019/09/24 13:06:24 by averheij      ########   odam.nl         */
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
	curr = begin_list[0];
	while (curr)
	{
		printf("Heres one: %s\n", (char*)(*curr).data);
		curr = (*curr).next;
	}
	ft_list_push_back(begin_list, "JK I'm first");
	curr = begin_list[0];
	while (curr)
	{
		printf("Heres one: %s\n", (char*)(*curr).data);
		curr = (*curr).next;
	}
}