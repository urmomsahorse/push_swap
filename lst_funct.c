/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_funct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astoiano <astoiano@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:36:52 by astoiano          #+#    #+#             */
/*   Updated: 2024/06/01 18:56:44 by astoiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_list **lst)
{
	t_list	*temp;

	temp = *lst;
	while (temp != NULL)
	{
		printf("%d ", temp->num);
		temp = temp->next;
	}
	printf("\n");
}

void	print_index(t_list **lst)
{
	t_list	*temp;

	temp = *lst;
	while (temp != NULL)
	{
		printf("%d ", temp->index);
		temp = temp->next;
	}
	printf("\n");
}

void	lstadd_back(t_list **lst, t_list *node)
{
	t_list	*current;

	current = *lst;
	while (current->next != NULL)
	{
		current = current->next;
	}
	if (current->next == NULL)
	{
		current->next = node;
	}
}

t_list	*free_list(t_list **list)
{
	t_list	*temp;
	t_list	*node;

	temp = *list;
	while (temp != NULL)
	{
		node = temp;
		temp = temp->next;
		free(node);
		node = NULL;
	}
	*list = node;
	return (NULL);
}
