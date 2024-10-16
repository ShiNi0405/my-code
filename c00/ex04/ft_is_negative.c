/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:31:39 by slai              #+#    #+#             */
/*   Updated: 2024/10/05 11:44:40 by slai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	flag;
	char	flag2;

	if (n >= 0)
	{
		flag = 'P';
		write(1, &flag, 1);
	}
	else
	{
		flag2 = 'N';
		write(1, &flag2, 1);
	}
}

/*int	main(void)
{
	ft_is_negative(5);
	ft_is_negative(0);
	ft_is_negative(-100);
}*/
