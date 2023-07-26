/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmulmane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 14:24:10 by tmulmane          #+#    #+#             */
/*   Updated: 2023/07/26 23:36:01 by tmulmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int ft_str_is_alpha(char *str)
{
    /*alphabetical characters = a-z 
    if string has a-z will return 1
    else return 0
    emtry string return 1
    create while loop check each character in wwhile loop string a-z
    */
    
    int i;
    int j;
    char p;

    i = 0;
    j = 0;
    while(str[i])
    {
        while(str[j])
        {
            if(str[i] != str[j])
            {
                
            }
            else
            {
                p = '1';
                return(p);
            }
            j++;
        }
        i++;
    }
}

#include <unistd.h>

int main(void)
{
    char A[] = {'a','b','c','d', '\0'};
    char B[] = {'a', 'b', '$','\0'};
    ft_str_is_alpha(A);
    return (0);
}