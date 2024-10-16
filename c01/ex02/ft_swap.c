/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 13:53:57 by slai              #+#    #+#             */
/*   Updated: 2024/10/05 13:55:00 by slai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *b;
	*b = *a;
	*a = c;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 2;
	b = 5;
	ft_swap(&a, &b);
	printf("%d %d\n", a, b);
	return (0);
}*/
