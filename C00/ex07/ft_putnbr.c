/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmulmane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 23:43:24 by tmulmane          #+#    #+#             */
/*   Updated: 2023/07/24 13:03:22 by tmulmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
void    ft_putnbr(int nb)
{
    char ch;

    if (nb < 0)
    {
        write(1, "-", 1);
        ch = nb / 10;
        ch = '0' - nb % 10;
    }
    else
    {
        ch = nb / 10;
        ch = '0' + nb % 10;
    }
    write(1, &ch, 1);
}

int main()
{
    ft_putnbr(42);
    return (0);
}