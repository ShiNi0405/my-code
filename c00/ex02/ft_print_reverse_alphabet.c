/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:58:27 by slai              #+#    #+#             */
/*   Updated: 2024/10/05 11:42:15 by slai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int		alphabet_count;
	char	c;

	alphabet_count = 122 ;
	while (alphabet_count > 96)
	{
		c = (char) alphabet_count;
		write(1, &c, 1);
		alphabet_count --;
	}
}

/*int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}*/
