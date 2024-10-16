/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 20:36:59 by slai              #+#    #+#             */
/*   Updated: 2024/10/02 14:02:19 by slai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	int		alphabet_count;
	char	c;	

	alphabet_count = 97 ;
	while (alphabet_count < 123)
	{
		c = (char) alphabet_count;
		write(1, &c, 1);
		alphabet_count ++;
	}
}

/*int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/
