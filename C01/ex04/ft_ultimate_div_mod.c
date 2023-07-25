/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmulmane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 22:45:24 by mymkuie           #+#    #+#             */
/*   Updated: 2023/07/25 10:55:34 by tmulmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int tmp;
    
    tmp = *a / *b;
    *b = *a % *b;
    *a = tmp;
    //write(1, &tmp, 1);
}
/*
#include <stdio.h>

int main(void)
{
    int a;
    int b;

    a = 100;
    b = 50;
    ft_ultimate_div_mod(&a, &b);
    printf("value i= %d\n", a);
    printf("value i= %d\n", b);
    return (0);
}*/