/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmulmane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 22:50:14 by tmulmane          #+#    #+#             */
/*   Updated: 2023/07/24 23:47:08 by tmulmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
void    ft_putstr(char *str)
{
    int len;

    len = 0;
    while(str[len])
    {
        ft_putchar(str[len]);
        len++;
    }
}
/*
int main(void)
{
    char a[] = {'H', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '\n'};
    ft_putstr(a);
    return (0);
}*/