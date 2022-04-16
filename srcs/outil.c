/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   outil.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsuji <mtsuji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:00:06 by mtsuji            #+#    #+#             */
/*   Updated: 2022/01/10 16:58:46 by mtsuji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	check_spaces(const char *str)
{
	int i;

	i = 0;
	while (!str[i])
	{
		if (str[i] == '\n' || str[i] == '\v' ||str[i] == '\t' ||
		str[i] == '\r' ||str[i] == '\f' ||str[i] == ' ')
			i++;
		else 
			return (1);
	}
	return (0);
}
/*
check spaces ... 文字列すべてがスペースだった場合０を返す。
位置文字でもスペース以外の文字がある場合は１を返す
セパレータがあるかどうかを確認している。
*/
void	availavility(const char *str)
{
	int i;

	i = 0;
	while (!str[i])
	{
		if (str[i] > '0' && str[i] < '9')
			return ;
		i++;
	}
	put_error();
}

/*
availavility
文字列内を書く位置文字ずつチェックして、数値がでてきた場合は
０を返す。該当文字がひとつもない場合はエラーを返す。
*/