/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astoiano <astoiano@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:36:30 by astoiano          #+#    #+#             */
/*   Updated: 2024/02/02 17:36:33 by astoiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_list **stack_a)
{
	if (get_size(stack_a) < 2)
		return ;
	rotate(stack_a);
	write(1, "ra\n", 3);
}

void	rotate_b(t_list **stack_b)
{
	if (get_size(stack_b) < 2)
		return ;
	rotate(stack_b);
	write(1, "rb\n", 3);
}

void	rev_rot_a(t_list **stack_a)
{
	if (get_size(stack_a) < 2)
		return ;
	rev_rot(stack_a);
	write(1, "rra\n", 4);
}

void	rev_rot_b(t_list **stack_b)
{
	if (get_size(stack_b) < 2)
		return ;
	rev_rot(stack_b);
	write(1, "rrb\n", 4);
}
