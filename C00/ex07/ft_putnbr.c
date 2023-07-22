/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmulmane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 23:43:24 by tmulmane          #+#    #+#             */
/*   Updated: 2023/07/22 09:46:46 by tmulmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, "=", 1);
    write(1, &c, 1);
}
void ft_putnbr(int nb)
{
    char ch;
    
    ch = '0' + nb % 10;
    ft_putchar(ch);
    

}

void main()
{
    int input;
    input = 0;
    ft_putnbr(input);
   
}