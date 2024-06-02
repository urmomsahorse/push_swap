/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astoiano <astoiano@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:36:41 by astoiano          #+#    #+#             */
/*   Updated: 2024/02/03 07:03:43 by astoiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	put_index(t_list **stack)
{
	t_list	*list;

	list = *stack;
	while (list != NULL)
	{
		list->index = get_index(stack, list->num);
		list = list->next;
	}
}

int	get_index(t_list **stack, int num)
{
	t_list	*list;
	int		index;

	index = 0;
	list = *stack;
	while (list != NULL)
	{
		if (num > list->num)
			index++;
		list = list->next;
	}
	return (index);
}

int	index_max(t_list **stack)
{
	t_list	*list;
	int		res;

	res = 0;
	list = *stack;
	while (list != NULL)
	{
		if (list->index > res)
			res = list->index;
		list = list->next;
	}
	return (res);
}

int	get_size(t_list **stack)
{
	t_list	*list;
	int		size;

	size = 0;
	list = *stack;
	while (list != NULL)
	{
		size++;
		list = list->next;
	}
	return (size);
}

int	choose_chunkz(t_list **stack)
{
	int	num;
	int	chunkz;

	num = get_size(stack);
	if (num > 0 && num <= 100)
		chunkz = 4;
	if (num > 100 && num <= 250)
		chunkz = 8;
	if (num > 250)
		chunkz = 14;
	return (chunkz);
}
