/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsuji <mtsuji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 11:01:43 by mtsuji            #+#    #+#             */
/*   Updated: 2022/04/21 11:01:45 by mtsuji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
bool is_sorted(stack<int> & a);
// please implement this function by yourself :)
int size = a.size();
for (int i = 0 ; !is_sorted(a) ; ++i)
{
    for(int j = 0 ; j < size ; ++j)
    {
        int num = a.top();
        if ((num >> i)&1) ra();
        else pb();
    }
    while (!b.empty()) pa();
}
*/

void    radix_sort(t_stacks *stacks)
{
//int size = a.size();
//int max_num = size - 1; // the biggest number in a is stack_size - 1
    int max_bits;
    int i;
    int j;
    int num;

    max_bits = 0; // how many bits for max_num 
    while ((stacks->max >> max_bits) != 0) 
        ++max_bits;
    i = -1; 
    while (++i < max_bits) // repeat for max_bits times
    {
        j = -1;
        while(j++ < stacks->max)
        {
            num = stacks->a->data; // top number of A
            if (((num >> i) &1) == 1) 
                ra(&stacks->a, 1); 
            // if the (i + 1)-th bit is 1, leave in stack a
            else 
                pb(stacks, 1);// otherwise push to stack b
        }
        // put into boxes done
        while (stacks->count_b != 0) 
            pa(stacks, 1); // while stack b is not empty, do pa
        // connect numbers done
    }
}
