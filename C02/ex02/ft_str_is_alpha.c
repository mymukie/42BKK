/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tachapon <tachapon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 14:24:10 by tmulmane          #+#    #+#             */
/*   Updated: 2023/08/06 01:09:18 by tachapon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

int ft_str_is_alpha(char *str)
{
    int i;
    
    i = 0;
    if(!str[i])
    {
        return (1);
    }
    while (str[i])
    {
        if (((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
        {
            i++;
        }
        else
        {
            return (0);
        }
    }
    return (1);
}
int main(void)
{
    char A[] = {"Hellworld"};
    //char A[] = {'a','b','c','d', '\0'};
    //char B[] = {'a', 'b', '$','\0'};
    ft_str_is_alpha(A);
    return (0);
}
