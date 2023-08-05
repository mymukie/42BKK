/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_numeric.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tachapon <tachapon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 01:12:56 by tachapon          #+#    #+#             */
/*   Updated: 2023/08/06 01:17:04 by tachapon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_str_is_numberic(char *str)
{
    int i;

    i = 0;
    if(!*str)
    {
        return (1);
    }
    while (str[i])
    {
        if (*str >= '0' && *str <= '9')
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
    char A[] = {'123123'};
    ft_str_is_numberic(A);
}