/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astoiano <astoiano@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:36:18 by astoiano          #+#    #+#             */
/*   Updated: 2024/02/02 17:36:25 by astoiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_list **stack_a)
{
	if (get_size(stack_a) <= 1)
		return ;
	swap(stack_a);
	write(1, "sa\n", 3);
}

void	swap_b(t_list **stack_b)
{
	if (get_size(stack_b) <= 1)
		return ;
	swap(stack_b);
	write(1, "sb\n", 3);
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	if (get_size(stack_a) > 1)
		swap(stack_a);
	if (get_size(stack_b) > 1)
		swap(stack_b);
	if (get_size(stack_a) > 1 || get_size(stack_b) > 1)
		write(1, "ss\n", 3);
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	if (get_size(stack_a) > 1)
		rotate(stack_a);
	if (get_size(stack_a) > 1)
		rotate(stack_b);
	if (get_size(stack_a) > 1 || get_size(stack_b) > 1)
		write(1, "rr\n", 3);
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	if (get_size(stack_a) > 1)
		rev_rot(stack_a);
	if (get_size(stack_b) > 1)
		rev_rot(stack_b);
	if (get_size(stack_a) > 1 || get_size(stack_b) > 1)
		write(1, "rrr\n", 4);
}
