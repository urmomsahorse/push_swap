/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astoiano <astoiano@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 17:36:12 by astoiano          #+#    #+#             */
/*   Updated: 2024/06/01 18:39:31 by astoiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;

	if (argc < 2)
		return (0);
	a = make_list(argc, argv);
	if (a == NULL)
	{
		write(2, "Error\n", 7);
		return (0);
	}
	b = NULL;
	if (check_sorted(&a) == 1)
	{
		free_list(&a);
		return (0);
	}
	else
	{
		put_index(&a);
		push_chunkz(&a, &b, get_size(&a), choose_chunkz(&a));
		sort_chunkz(&a, &b);
		free_list(&a);
	}
}

t_list	*make_list(int ac, char **argv)
{
	t_list	*node1;
	t_list	*temp;
	int		num;
	int		i;

	node1 = malloc(sizeof(t_list));
	if (check_number(argv[1]) == 0)
		return (free_list(&node1));
	num = ft_atol(argv[1]);
	node1->num = num;
	node1->next = NULL;
	i = 2;
	while (i < ac)
	{
		if (check_number(argv[i]) == 0)
			return (free_list(&node1));
		if (check_dup(&node1, ft_atol(argv[i])) == 0)
			return (free_list(&node1));
		temp = malloc(sizeof(t_list));
		temp->num = ft_atol(argv[i]);
		temp->next = NULL;
		lstadd_back(&node1, temp);
		i++;
	}
	return (node1);
}

int	check_number(char *str)
{
	int	pos;

	pos = 0;
	if ((str[pos] == '-' || str[pos] == '+') && ft_isdigit(str[pos + 1]) != 0)
		pos++;
	while (ft_isdigit(str[pos]) != 0)
		pos++;
	if (str[pos] != '\0' || pos == 0)
		return (0);
	if (ft_atol(str) < -2147483648 || ft_atol(str) > 2147483647)
		return (0);
	return (1);
}

int	check_dup(t_list **list, long num)
{
	t_list	*list1;

	list1 = *list;
	if (num < -2147483648 || num > 2147483647)
		return (0);
	while (list1->next != NULL)
	{
		if (num == list1->num)
			return (0);
		list1 = list1->next;
	}
	return (1);
}

int	check_sorted(t_list **list)
{
	t_list	*list1;

	list1 = *list;
	while (list1->next != NULL)
	{
		if (list1->num > list1->next->num)
			return (0);
		list1 = list1->next;
	}
	return (1);
}
