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


#include "../include/push_swap .h"

void    array_separate(int argc, char **argv, t_stacks ---)
{
    int count_space;
    int i;
    int j;
    char **num;
    char **temp;

    i = 1;
    while (i < argc)
    {
        count_space = count_space(argv[i]);
        num = ft_split(argv[i], count_space);
        j = 0;
        while (count_space > j)
        {
            temp[j] = ft_atoi(num[j]);
            free(num[j])
        }
        free(num);
        i++;
    }

}
