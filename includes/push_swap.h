/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsuji <mtsuji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:56:30 by mtsuji            #+#    #+#             */
/*   Updated: 2022/01/10 17:02:09 by mtsuji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"
# include <stdio.h>
//stdio提出前に削除

typedef	struct	s_stack
{
	int	num;
	//int size;
	int	data;
	int	step;
	int	rotate;
	struct s_stack	*next;
}		t_stack;

typedef	struct s_data
{
	int num;
	int a[10000];
	int	arr[10000];
}	t_data;


typedef struct s_stacks
{
	int	count_a;
	int	count_b;
	int	min;
	int	max;
	int med;
	t_stack *a;
	t_stack *arr;
	t_stack	*b;
	struct s_stacks	*next;
}	t_stacks;

typedef	struct s_markup
{
	int	min_a;
	int	med_a;
	int	max_a;
	int	min_b;
	int	med_b;
	int	max_b;
	int	quartre;
}	t_markup;

//init_stack
void	stack_put_null(t_stacks *stack, t_data *new);
void stack_init(t_data *new, t_stacks *stacks);
void	steps_markup(t_stacks *stacks, t_data *new);
t_stack *stack_create(const int *buff, const int *arr, int count);
void	stacks_free(t_stacks *stacks);
//void	stacks_free(t_stacks *stacks, t_data *new);
//number_separate
void    number_separate(int argc, char **argv, t_data *new);
void    stacking(t_data *new, int *buff, int words);
//short_sort
void	sort_three(t_stacks *stacks);
void	short_sort(t_stacks *stacks);
void	sort_5_elements(t_stacks *stacks);

//outil
void	ft_swap(int *a, int *b);
void	availavility(const char *str);
int	check_spaces(const char *str);
int	sorted(t_data *stacks);
//stack_create
t_stack *creation(void);
void	stack_delete(t_stack **stack);
//duplicate_check
void    search_dup(const int *dup, int count);
int    *intcpy(int *dest, int *buff, int count);
void	duplicate_check(t_data *new, t_stacks *stacks);
//t_stack *put_num_from_arg(int argc, char **argv, t_stack *stack);

//error_check
int	error_check(int argc, char **argv);
void put_error(void);
void    string_check(const char *str);

//action
void	ra(t_stack **a, int i);
void	rb(t_stack **b, int i);
void	rr(t_stacks **stack, int i);
void	rra(t_stack **a, int i);
void	rrb(t_stack **b, int i);
void	rrr(t_stacks **stack, int i);
void	sa(t_stack *a, int i);
void	sb(t_stack *b, int i);
void	ss(t_stacks *stack, int i);
void	pa(t_stacks *stacks, int i);
void	pb(t_stacks *stacks, int i);

//main
void	sort(t_stacks *stacks);

//global_sort
void	big_sort(t_stacks *stacks);
void	sort_a(t_stacks *stacks);
void	sort_b(t_stacks *stacks);
void    first_big_sort(t_stacks *stacks);
void    mark_up_stack_a(t_stacks *stacks);

//quick_sort
int partition(int *stack, int start, int end);
void	quicksort(int *stack, int start, int end);
void    find_mid_value_b(t_stacks *stacks);
void	find_mid_value_a(t_stacks *stacks);
//radix_sort
void    radix_sort(t_stacks *stacks);
int    nb_byte(t_stacks *stacks);
#endif
