/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matanton <matanton@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 03:54:44 by matanton          #+#    #+#             */
/*   Updated: 2022/04/14 04:19:39 by matanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	f;
	char	s;

	f = 0;
	s = 0;
	while (f < 100)
	{
		s = f + 1;
		while (s < 100)
		{
			ft_putchar(f / 10 + '0');
			ft_putchar(f % 10 + '0');
			ft_putchar(' ');
			ft_putchar(s / 10 + '0');
			ft_putchar(s % 10 + '0');
			if ((f / 10 != 9) || (f % 10 != 8))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			s++;
		}
		f++;
	}
}
