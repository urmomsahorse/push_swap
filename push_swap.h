#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <ctype.h>


void swap_a(int *stack_a, int print);
void swap_b(int *stack_b, int print);
void push_a(int *stack_a, int *stack_b);
void push_b(int *stack_a, int *stack_b);

void rotate_a(int *stack_a, int print);
void rotate_b(int *stack_b, int print);
void rev_rot_a(int *stack_a, int print);
void rev_rot_b(int *stack_b, int print);

void ss(int *stack_a, int *stack_b);
void rr(int *stack_a, int *stack_b);
void rrr(int *stack_a, int *stack_b);
void shift_elem(int *stack, int direc);
void print_arr(int *arr, int size);

#endif
