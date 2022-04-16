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
}	t_data;


typedef struct s_stacks
{
	int	count_a;
	int	count_b;
	int	min;
	int	max;
	int med;
	t_stack *a;
	t_stack *b;
	struct s_stacks	*next;
}	t_stacks;

//init_stack
void	stack_put_null(t_stacks *stack, t_data *new);
void stack_init(t_data *new, t_stacks *stacks);
t_stack *stack_create(const int *buff, int count);
//number_separate
void    number_separate(int argc, char **argv, t_data *new);
void    stacking(t_data *new, int *buff, int words);
//short_sort
void	sort_three(t_stacks *stacks);
void	short_sort(t_stacks *stacks);
//outil
void	ft_swap(int *a, int *b);
void	availavility(const char *str);
int	check_spaces(const char *str);
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
void	ft_ra(t_stack **a, int i);
void	ft_rb(t_stack **b, int i);
void	ft_rr(t_stacks **stack, int i);
void	rra(t_stack **a, int i);
void	rrb(t_stack **b, int i);
void	ft_rrr(t_stacks **stack, int i);
void	ft_sa(t_stack **a, int i);
void	ft_sb(t_stack **b, int i);
void	ft_ss(t_stacks **stack, int i);
void	pa(t_stack **a, t_stack **b);
//pbがまだ未完成

//error_check

//quick_sort
int partition(int *stack, int start, int end);
void	quicksort(int *stack, int start, int end);
//print_helper ... libftが統合できれば不要

#endif
