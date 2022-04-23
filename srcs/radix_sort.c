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

int    nb_byte(t_stacks *stacks)
{
    int i;

    i = 0;
  
    while ((stacks->count_a >> i) != 0)
            i++;
    return (i);
}

void    radix_sort(t_stacks *stacks)
{
//int size = a.size();
//int max_num = size - 1; // the biggest number in a is stack_size - 1
    int max_bits;
    int i;
    int j;
    int num;
    int size;

    max_bits = nb_byte(stacks);
    size = stacks->count_a;
    i = 0; 
    while (i < max_bits) // repeat for max_bits times
    {
        j = 0;
        while(j < size)
        {
            // top number of A
            num = stacks->a->step;
            if (((num >> i) & 1) == 1) 
                ra(&stacks->a, 1); 
            // if the (i + 1)-th bit is 1, leave in stack a
            else 
                pb(stacks, 1);// otherwise push to stack b
            j++;
        }
        // put into boxes done
        while (stacks->count_b > 0) 
            pa(stacks, 1); // while stack b is not empty, do pa
        i++;
        // connect numbers done
    }
}
