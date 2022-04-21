/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_com.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matanton <matanton@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 00:03:55 by matanton          #+#    #+#             */
/*   Updated: 2022/04/12 03:22:38 by matanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	limit(char A, char B, char C)
{
	write(1, &A, 1);
	write(1, &B, 1);
	write(1, &C, 1);
	if (A != '7' || B != '8' || C != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;

	c = '0';
	d = c + 1;
	while (c <= '7')
	{
		d = c + 1;
		while (d <= '8')
		{
			u = d + 1;
			while (u <= '9')
			{
				limit(c, d, u);
			u++;
			}
		d++;
		}
	c++;
	}
}
