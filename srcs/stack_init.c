/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsuji <mtsuji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 13:04:41 by mtsuji            #+#    #+#             */
/*   Updated: 2022/04/21 17:38:24 by mtsuji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	stack_put_null(t_stacks *stacks, t_data *new)
{
	stacks->count_a = 0;
	stacks->count_b = 0;
	stacks->a = NULL;
	stacks->arr = NULL;
	stacks->b = NULL;
	new->num = 0;
}

void	stack_init(t_data *new, t_stacks *stacks)
{
	//int i;
	steps_markup(new, stacks);
	stacks->a = stack_create(new->a, new->arr, new->num);
	stacks->b = NULL;
	//stacks->arr = stack_create(new->a, new->arr, new->num);
/*	i = 0;
	while (i < stacks->count_a)
	{
		stacks->a->step = new->arr[i];
		stacks->a->step = stacks->a->next->step;
		i++;
	}*/
}

t_stack	*stack_create(const int *buff, const int *arr, int count)
{
	t_stack	*first_data;
	t_stack	*new_list;
	int		i;

	i = 0;
	new_list = (t_stack *)malloc(sizeof(t_stack));
	if (new_list == NULL)
		exit (1);
	first_data = new_list;
	while (i < count)
	{
		if (i < count -1)
		{
			new_list->next = (t_stack *)malloc(sizeof(t_stack));
			if (new_list->next == NULL)
				exit(1);
		}
		new_list->data = buff[i];
		new_list->step = arr[i];
		if (i == (count -1))
			new_list->next = NULL;
		else
			new_list = new_list->next;
		i++;
	}
	return (first_data);
}

void	stacks_free(t_stacks *stacks)
{
	int		i;
	t_stack	*buff;

	i = 0;
	while (i < stacks->count_a)
	{
		buff = stacks->a;
		stacks->a = stacks->a->next;
		free(buff);
		i++;
	}
	i = 0;
	while (i < stacks->count_b)
	{
		buff = stacks->arr;
		stacks->b = stacks->b->next;
		free(buff);
		i++;
	}
	i = 0;
}
/*
void	steps_markup(const int *stacks)
{
	
	int		i;
	int		j;
	int	*buff;

	i = 1;
	j = 0;
	buff = (int *)malloc(sizeof(int) * stacks->count_a);
	buff = intcpy(buff, &stacks->a->data, stacks->count_a);
	quicksort(buff, buff[0], stacks->max);

	while (buff[j] <= stacks->count_a)
	{
		stacks->a->step = i;
		stacks->a->step = stacks->a->next->step;
		j++;
		i++;
	}
	
	free(buff);
	
void	steps_markup(t_stacks *stacks, int count, t_data *new)
{
	//t_stacks	*new_list;
	int		i;
	//int *buff;

	//i = 1;
	//new_list = (t_stacks *)malloc(sizeof(t_stacks));
	//if (new_list == NULL)
	//	exit (1);
	//first_step = new_list;
	
	quicksort(new->a, 0, count);
	
	i = 1;
	while (i <= count)
	{
		stacks->a->step = i;
		//new_list = new_list->next;
		i++;
		stacks->a->step = stacks->a->next->step; 
	}
	stacks->a->next = NULL;
	
	
	int	*duplicate;
	int j;

	duplicate = (int *)malloc(sizeof(int) * new->num);
	duplicate = intcpy(duplicate, new->a, count);
	quicksort(duplicate, 0, new->num - 1);
	i = 1;
	j = 0;
	while (duplicate[j])
	{
		stacks->a->step = i;
		duplicate[j] = stacks->a->step;
		stacks->a->next->step = stacks->a->step;
		i++;
		j++;
	}
	

}
*/

void	steps_markup(t_data *new, t_stacks *stacks)
{
	int 	i;
	int	j;
	int 	index;

	quicksort(new->arr_radix, 0, stacks->count_a -1);
	i = 0;
	index = 1;
	while (i < stacks->count_a)
	{
		j = 0;
		while (j < stacks->count_a)
		{
			if (new->arr[i] > new->arr_radix[j])
				index++;
			j++;
		}
		//stacks->a->data = index;
		new->arr[i] = index;
		index = 1;
		i++;
	}
}