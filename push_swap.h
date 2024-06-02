/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astoiano <astoiano@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:37:25 by astoiano          #+#    #+#             */
/*   Updated: 2024/02/02 17:37:27 by astoiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <ctype.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				num;
	int				index;
	struct s_list	*next;
}					t_list;

t_list				*make_list(int ac, char **argv);
int					check_number(char *str);
int					check_dup(t_list **list, long num);
int					check_sorted(t_list **list);

void				put_index(t_list **stack);
int					get_index(t_list **stack, int num);
int					index_max(t_list **stack);
int					get_size(t_list **stack);
int					choose_chunkz(t_list **stack);

void				push_chunkz(t_list **a, t_list **b, int m, int c);
void				sort_chunkz(t_list **a, t_list **b);
int					find_cheapest(t_list **stack, int index);
void				sort_rest(t_list **a, t_list **b);
void				sort_3(t_list **a);

void				push_a(t_list **stack_a, t_list **stack_b);
void				push_b(t_list **stack_a, t_list **stack_b);
void				swap(t_list **stack);
void				rotate(t_list **stack);
void				rev_rot(t_list **stack);

void				swap_a(t_list **stack_a);
void				swap_b(t_list **stack_b);
void				ss(t_list **stack_a, t_list **stack_b);
void				rr(t_list **stack_a, t_list **stack_b);
void				rrr(t_list **stack_a, t_list **stack_b);

void				rotate_a(t_list **stack_a);
void				rotate_b(t_list **stack_b);
void				rev_rot_a(t_list **stack_a);
void				rev_rot_b(t_list **stack_b);

void				print_list(t_list **list);
void				print_index(t_list **list);
void				lstadd_back(t_list **list, t_list *node);
t_list				*free_list(t_list **list);

int					ft_isdigit(char c);
int					ft_isspace(char c);
long				ft_atol(const char *str);

#endif
