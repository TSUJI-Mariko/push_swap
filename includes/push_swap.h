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

# ifndef "PUSH_SWAP_H"
# define "PUSH_SWAP_H"
# include <unistd.h>
# include <stdlib.h>

typedef	strucrt	s_stack
{
	int	number;
	struct s_stack	next;
}	t_stack;

typedef struct s_stacks
{
	t_stack a;
	t_stack b;
	t_stack temp;
	struct s_stacks	next;
}	t_stacks;

#endif
