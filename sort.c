/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astoiano <astoiano@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:36:04 by astoiano          #+#    #+#             */
/*   Updated: 2024/02/03 07:04:32 by astoiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_chunkz(t_list **a, t_list **b, int m, int c)
{
	int	x;
	int	size;
	int	i;

	x = 0;
	while ((x < c) && get_size(a) > 5)
	{
		size = get_size(a);
		i = 0;
		while (i < size && size > 0)
		{
			if ((*a)->index >= x * (m / c) && (*a)->index < ((x + 1) * (m / c)))
			{
				if (i % 2 == 0)
					rotate_b(b);
				push_b(a, b);
			}
			else
				rotate_a(a);
			i++;
		}
		x++;
	}
	if (get_size(a) > 0 && check_sorted(a) == 0)
		sort_rest(a, b);
}

void	sort_chunkz(t_list **a, t_list **b)
{
	int	next;

	while (*b != NULL)
	{
		next = index_max(b);
		if (find_cheapest(b, next) == 1)
		{
			while ((*b)->index != next)
				rotate_b(b);
			if ((*b)->index == next)
				push_a(a, b);
		}
		else
		{
			while ((*b)->index != next)
				rev_rot_b(b);
			if ((*b)->index == next)
				push_a(a, b);
		}
	}
}

int	find_cheapest(t_list **stack, int index)
{
	t_list	*list;
	int		rb;
	int		rrb;

	rb = 0;
	rrb = 0;
	list = *stack;
	while (list->index != index)
	{
		rb++;
		list = list->next;
	}
	while (list != NULL)
	{
		rrb++;
		list = list->next;
	}
	if (rb <= rrb)
		return (1);
	return (0);
}

void	sort_rest(t_list **a, t_list **b)
{
	int	max;

	max = index_max(a);
	while (get_size(a) > 3)
	{
		if ((*a)->index < max - 2)
			push_b(a, b);
		else
			rotate_a(a);
	}
	sort_3(a);
}

void	sort_3(t_list **a)
{
	t_list	*list;
	int		max;

	list = *a;
	max = index_max(a);
	if (list->index == index_max(a))
		rotate_a(a);
	else if (list->next->index == index_max(a))
		rev_rot_a(a);
	if (check_sorted(a) == 0)
		swap_a(a);
}
