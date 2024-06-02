#include "push_swap.h"
#include <stdio.h>

void swap_a(int *stack_a, int print)
{
	int temp;

	if(!stack_a || !stack_a[1])
		return ;
	temp = stack_a[0];
	stack_a[0] = stack_a[1];
	stack_a[1] = temp;
	if (print == 1)
		printf("sa\n");
}

void swap_b(int *stack_b, int print)
{
	int temp;

	if(!stack_b || !stack_b[1])
		return ;
	temp = stack_b[0];
	stack_b[0] = stack_b[1];
	stack_b[1] = temp;
	if (print == 1)
		printf("sb\n");
}

void push_a(int *stack_a, int *stack_b)
{
	if (!stack_b)
		return ;
	shift_elem(stack_a, 1);
	stack_a[0] = stack_b[0];
	stack_b[0] = 0;
	shift_elem(stack_b, -1);
	printf("pa\n");
}

void push_b(int *stack_a, int *stack_b)
{
//	if (!stack_a)
//		return ;
	shift_elem(stack_b, 1);
	stack_b[0] = stack_a[0];
	stack_a[0] = 0;
	shift_elem(stack_a, -1);
	printf("pb");
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

int main()
{
	int size = 5;
	int stack_a[5] = {187, 7, 53, 4,0};
	int stack_b[5] = {0,0,0,0,0};
	print_arr(stack_a, size);
//	swap_a(stack_a);
//	printf("swap\n");
//	print_arr(stack_a, size);
	push_b(stack_a, stack_b);
	printf("push_b\n");
	print_arr(stack_b, size);
	push_b(stack_a, stack_b);
	printf("push_b\n");
	print_arr(stack_b, size);
	swap_b(stack_b);
	printf("swap\n");
	print_arr(stack_b, size);
}
