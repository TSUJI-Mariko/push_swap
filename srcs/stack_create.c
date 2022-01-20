/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_create.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsuji <mtsuji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 14:36:33 by mtsuji            #+#    #+#             */
/*   Updated: 2022/01/15 14:36:38 by mtsuji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack *creation(void)
{
    t_stack *stack;

    stack = (t_stack*)malloc(sizeof(t_stack));
    stack->num = 0;
    stack->next = NULL;
    return (stack);
}

void stack_delete(t_stack **stack)
{
    t_stack *temp;
    t_stack *delete;

    temp = *stack;
    while (!temp)
    {
        delete = temp;
        temp = (*stack)->next;
        free(delete);
    }
    stack = NULL;
}
/*
t_stack *put_num_from_arg(int argc, char **argv, t_stack *stack)
{
    int i;

    if (argc > 1)
    {
        while (argv[i])
        {
            stack->num[i] = ft_atoi(argv[i]);
            i++;
        }
    }
    return (i);
}*/