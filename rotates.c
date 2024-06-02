#include "push_swap.h"

void rotate_a(int *stack_a, int print)
{
	int temp;
	int val = 5;

	temp = stack_a[0];
	stack_a[0] = 0;
	shift_elem(stack_a, -1);
	stack_a[val - 1] = temp;
	if (print == 1)
		printf("ra");
}

void rotate_b(int *stack_b, int print)
{
	int temp;
	int val = 5;

	temp = stack_b[0];
	stack_b[0] = 0;
	shift_elem(stack_b, -1);
	stack_b[val - 1] = temp;
	if (print == 1)
		printf("rb");
}

void rev_rot_a(int *stack_a, int print)
{
	int temp;
	int val = 5;

	temp = stack_a[val - 1];
	stack_a[val] = 0;
	shift_elem(stack_a, 1);
	stack_a[0] = temp;
	if (print == 1)
		printf("rra");
}

void rev_rot_b(int *stack_b, int print)
{
	int temp;
	int val = 5;

	temp = stack_a[val - 1];
	stack_b[val] = 0;
	shift_elem(stack_b, 1);
	stack_b[0] = temp;
	if (print == 1)
		printf("rrb");
}
