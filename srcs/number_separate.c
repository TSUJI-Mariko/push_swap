/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_separate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsuji <mtsuji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 17:33:19 by mtsuji            #+#    #+#             */
/*   Updated: 2022/04/05 17:29:18 by mtsuji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/push_swap.h"

void    number_separate(int argc, char **argv, t_data *new)
{
    int words;
    int i;
    int j;
    int *buff;
    char **temp;

    i = 1;
    while (i < argc)
    {
        words = count_words(argv[i]);
        temp = ft_split(argv[i], words);
        buff = (int *)malloc(sizeof(int) * words);
        j = 0;
        while (words > j)
        {
            buff[j] = ft_atoi(temp[j]);
            free(temp[j]);
            j++;
        }
        free(temp);
       /* j = 0;
        while (words >= j)//多分関数を別に分けて作ったほうがよい
        {
            (*stack)->num = buff[j];
            //free(buff);
            j++;
        }
        free(buff);
        */
        stacking(new, buff, words);
        i++;
    }
}

void   stacking(t_data *new, int *buff, int words)
{
    int i;
    
    i = -1;
    while (words > ++i)
    {
        new->a[new->num + i] = buff[i];
        new->arr[new->num + i] = buff[i];
        new->arr_radix[new->num + i] = buff[i];
    }
    new->num += words;
    free(buff);
}
