#include "push_swap.h"

void ss(int *stack_a, int *stack_b)
{
	swap_a(stack_a, 0);
	swap_b(stack_b, 0);
	printf("ss");
}

void rr(int *stack_a, int *stack_b)
{
	rotate_a(stack_a, 0);
	rotate_b(stack_b, 0);
	printf("rr");
}

void rrr(int *stack_a, int *stack_b)
{
	rev_rot_a(stack_a, 0);
	rev_rot_b(stack_b, 0);
	printf("rrr");
}

void shift_elem(int *stack, int direc)
{
	int i;
	int size = 5;

//	if (stack[0] == 0)
//		return ;
	if (direc == 1)
	{
		i = size;
		while(i > 0)
		{
			stack[i] = stack[i -1];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < size)
		{
			stack[i] = stack[i +1];
			i++;
		}
	}
}

void print_arr(int *arr, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		printf("%d\n", arr[i]);
		i++;
	}
}
