/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsuji <mtsuji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 18:44:40 by mtsuji            #+#    #+#             */
/*   Updated: 2022/01/20 16:28:38 by mtsuji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	**s;
	if (argc < 3)
		return (1);
	s = (t_stack **)malloc(sizeof(t_stack));
	if (argc == 4)
	{
		number_separate(argc, argv, s);
	}
	free(s);
	return (0);
}
