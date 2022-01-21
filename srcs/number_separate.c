/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_separate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsuji <mtsuji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 17:33:19 by mtsuji            #+#    #+#             */
/*   Updated: 2022/01/18 17:33:26 by mtsuji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/push_swap.h"

int    number_separate(int argc, char **argv, t_stack **stack)
{
    int count_separator;
    int i;
    int j;
    int *buff;
    char **temp;

    i = 1;
    while (i < argc)
    {
        count_separator = count_space(argv[i]);
        temp = ft_split(argv[i], count_separator);
        buff = (int *)malloc(sizeof(int) * count_separator);
        j = 0;
        while (count_separator > j)
        {
            buff[j] = ft_atoi(temp[j]);
            free(temp[j]);
        }
        free(temp);
        i++;
    }
    j = 0;
    while (buff[j])//多分関数を別に分けて作ったほうがよい
    {
        (*stack)->num = buff[j]; 
        free(buff);
        j++;
    }
    free(buff);
    return (j);
}
/*
void    stacking(t_stack *stack, int *buff, int count)
{
    int i;
    
    i = 0;
    while (count > i)
        stack->a[stack->size + i] = buff[i];
    stack->size += count;
    free(buff);
}*/
