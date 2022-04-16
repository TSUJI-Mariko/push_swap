/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsuji <mtsuji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 18:51:23 by mtsuji            #+#    #+#             */
/*   Updated: 2022/01/17 18:51:28 by mtsuji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*エラーケースの対処。
**同じ数字が複数出てくる場合、
**数字以外の文字列があった場合
**-が２連続で現れた場合（１文字までは許容）= atoiでカバーできているはず。
**
**
*/
int    error_check(int argc, char **argv)
{
    //日曜日に追加する
}

void put_error(void)
{
    ft_putstr_fd("Error\n", 1);
    exit (1);
}

void    string_check(const char *str)
{
    size_t  i;
    int sign;
    int number;

    i = 0;
    sign = 0;
    number = 0;
    while (!str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
            number++;
        else if (str[i] == ' ' || str[i] == '\t')
        {
            if (sign != 0 && number == 0)
                put_error(); // +/-の符号のあとに空白がある
            number = 0;
            sign = 0;
        }
        else if ((str[i] == '+' || str[i] == '-') &&
            (sign == 0 && number == 0) && (str[i + 1] != '\0'))
            sign++; // +/-の符号の前にくっついて数値が書かれている
        else
            put_error();
        i++;
    }  
}
/*
string_check... 符号のついた数字以外の文字列を
エラー処理で取り除く
*/