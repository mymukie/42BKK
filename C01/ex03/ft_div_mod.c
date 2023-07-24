/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mymkuie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 22:40:09 by mymukie           #+#    #+#             */
/*   Updated: 2023/07/24 22:44:31 by mymkuie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}
/*
#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int i;
    int j;

    a = 100;
    b = 50;
    ft_div_mod(a, b, &i, &j);
    printf("value i= %d\n", i);
    printf("value i= %d\n", j);
    return (0);
}
*/
