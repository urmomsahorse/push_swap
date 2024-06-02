/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astoiano <astoiano@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:37:09 by astoiano          #+#    #+#             */
/*   Updated: 2024/02/03 07:02:41 by astoiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp;

	if (*stack_b == NULL)
		return ;
	temp = *stack_a;
	*stack_a = *stack_b;
	*stack_b = (*stack_b)->next;
	(*stack_a)->next = temp;
	write(1, "pa\n", 3);
}

void	push_b(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp;

	if (*stack_a == NULL)
		return ;
	temp = *stack_b;
	*stack_b = *stack_a;
	*stack_a = (*stack_a)->next;
	(*stack_b)->next = temp;
	write(1, "pb\n", 3);
}

void	swap(t_list **stack)
{
	t_list	*list;
	t_list	*node1;
	t_list	*node2;

	list = *stack;
	if (!list || !list->next)
		return ;
	node1 = list;
	node2 = list->next;
	node1->next = node2->next;
	node2->next = node1;
	*stack = node2;
}

void	rotate(t_list **stack)
{
	t_list	*first;
	t_list	*list;

	first = *stack;
	*stack = (*stack)->next;
	list = *stack;
	while (list->next != NULL)
		list = list->next;
	list->next = first;
	first->next = NULL;
}

void	rev_rot(t_list **stack)
{
	t_list	*list;
	t_list	*last;
	t_list	*first;

	first = *stack;
	list = *stack;
	while (list->next->next != NULL)
		list = list->next;
	last = list->next;
	list->next = NULL;
	last->next = first;
	*stack = last;
}
