/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsuji <mtsuji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 18:44:40 by mtsuji            #+#    #+#             */
/*   Updated: 2022/04/05 17:38:21 by mtsuji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stacks *s;
	t_data	*new_data;
	if (argc < 2)
		return (1);
	s = (t_stacks *)malloc(sizeof(t_stacks));
	if (s == NULL)
		exit(1);
	new_data = (t_data *)malloc(sizeof(t_data));
	if (new_data == NULL)
		exit(1);
	stack_put_null(s, new_data);
	if (error_check(argc, argv)) //数列としてokかどうかをチェックする。
	{
		number_separate(argc, argv, new_data);
		stack_init(new_data, s);
		duplicate_check(new_data, s);
		short_sort(s);
	}
	free(s);
	free(new_data);
	return (0);
}
