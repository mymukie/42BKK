/* ************************************************************************** */
/*                                      */
/*                            :::     ::::::::   */
/*   ft_print_comb2.c                           :+:   :+:    :+:   */
/*                          +:+ +:+       +:+    */
/*   By: tmulmane <marvin@42.fr>                    +#+  +:+       +#+    */
/*                        +#+#+#+#+#+   +#+     */
/*   Created: 2023/07/23 23:57:47 by tmulmane        #+#  #+#          */
/*   Updated: 2023/07/24 09:06:48 by tmulmane       ###   ########.fr    */
/*                                      */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);

}

void ft_print(int nb)
{
    int first;
    int second;

    if (nb > 9)
    {
        first = nb / 10;
        second = nb % 10;
        ft_putchar(first + 48);
        ft_putchar(second + 48);
    }
    else
    {
        ft_putchar('0');
        ft_putchar(nb + 46);
    }

}

void    ft_print_comb2()
{
    int i;
    int j; 
        
    i = 0;

    while(i != 99)
    {
        j = i + 1;
        while(j != 99)
        {
            ft_print(i);
            ft_putchar(' ');
            ft_print(j);
            if(i < 98 || j <99)
            {
                ft_putchar(',');
                ft_putchar(' ');
            }
            j++;

        }
        i++;
    }

}

int main()
{
    ft_print_comb2();
    return (0);
}
