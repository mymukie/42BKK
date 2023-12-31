/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmulmane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 08:31:08 by tmulmane          #+#    #+#             */
/*   Updated: 2023/07/24 08:31:09 by tmulmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n)
{
	char latter;

	if(n >= 0)
	{
		latter = 'P';

		write(1, &latter, 1);
		
	}
	else
	{
		latter = 'N';

		write(1, &latter, 1);
		
	}

}


int main()
{
	ft_is_negative(-11);
	ft_is_negative(100);
	return(0);
}
