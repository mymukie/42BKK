/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmulmane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 11:57:31 by tmulmane          #+#    #+#             */
/*   Updated: 2023/07/26 13:49:15 by tmulmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strcpy(char *dest, char *src)
{
    int i;

    i =0;
    while(src[i])
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}
/*
#include <unistd.h>
char ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    int len;
    char A[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char B[20];
    
    len = 0;

    ft_strcpy(B, A);
    while(B[len])
    {
        ft_putchar(B[len]);
        len++;
    }
    write(1, "\n", 1);

    return (0);
}
*/

