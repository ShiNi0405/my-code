/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:33:10 by slai              #+#    #+#             */
/*   Updated: 2024/10/05 11:43:30 by slai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		alphabet_count;
	char	c;

	alphabet_count = 48;
	while (alphabet_count < 58)
	{
		c = alphabet_count ;
		write(1, &c, 1);
		alphabet_count ++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
