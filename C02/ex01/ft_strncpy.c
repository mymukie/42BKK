/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmulmane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 13:50:10 by tmulmane          #+#    #+#             */
/*   Updated: 2023/07/26 23:35:39 by tmulmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i;

    i = 0;
    while(i <= n && src[i])
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}

#include <unistd.h>

char ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

int main(void)
{
    int len;
    unsigned int n;
    char A[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};
    char B[20];
    
    n = 3;
    len = 0;
    ft_strncpy(B, A, n);
    while(B[len])
    {
        ft_putchar(B[len]);
        len++;
    }
    write(1, "\n", 1);
}
