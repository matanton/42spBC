/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matanton <matanton@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 04:06:18 by matanton          #+#    #+#             */
/*   Updated: 2022/04/20 15:54:07 by matanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		str[i] = str[i] + 32;
		i++;
	}
	
	i = 0;
	while (str[i] != '\0')
	{
	if ((str[i] >= 'a' && str[i] <= 'z')
			&& (!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
			&& (!(str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
			&& (!(str[i - 1] >= '0' && str[i - 1] <= '9')))
		str[i] = str[i] - 32;
	i++;
	}
	return (str);
}
