/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmulmane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 14:19:21 by tmulmane          #+#    #+#             */
/*   Updated: 2023/07/24 15:03:09 by tmulmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void ft_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}
/*
#include <stdio.h>
int main(void)
{
    int a;
    int b;

    a = 2;
    b = 7;
    
    printf("Value of a = %d\n", a);
    printf("Value of b = %d\n", b);
    printf("Addres of a = %d\n", &a);
    printf("Addres of b = %d\n", &b);
    ft_swap(&a,&b);
    printf("New Value of a = %d\n", a);
    printf("New Value of b = %d\n", b);
    printf("Addres of a = %d\n", &a);
    printf("Addres of b = %d\n", &b);
    return (0);
}*/