/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsuji <mtsuji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 13:04:41 by mtsuji            #+#    #+#             */
/*   Updated: 2022/04/23 17:19:57 by mtsuji           ###   ########.fr       */
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
	steps_markup(new, stacks);
	stacks->a = stack_create(new->a, new->arr, new->num);
	stacks->b = NULL;
}

t_stack	*stack_create(const int *buff, const int *arr, int count)
{
	t_stack	*first_data;
	t_stack	*new_list;
	int		i;

	i = -1;
	new_list = (t_stack *)malloc(sizeof(t_stack));
	if (new_list == NULL)
		exit (1);
	first_data = new_list;
	while (++i < count)
	{
		if (i < count -1)
		{
			new_list->next = (t_stack *)malloc(sizeof(t_stack));
			if (new_list->next == NULL)
				exit(1);
		}
		new_list->data = buff[i];
		new_list->step = arr[i];
		if (i == (count - 1))
			new_list->next = NULL;
		else
			new_list = new_list->next;
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

void	steps_markup(t_data *new, t_stacks *stacks)
{
	int		i;
	int		j;
	int		index;

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
		new->arr[i] = index;
		index = 1;
		i++;
	}
}
