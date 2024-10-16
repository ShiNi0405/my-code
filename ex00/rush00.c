/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytan-wei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 17:43:37 by ytan-wei          #+#    #+#             */
/*   Updated: 2024/10/06 17:49:54 by ytan-wei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	print_char(int h, int y, int w, int x)
{
	if ((h == 1 || h == y) && (w == 1 || w == x))
	{
		ft_putchar('o');
	}
	else if (h == 1 || h == y)
	{
		ft_putchar('-');
	}
	else if (w == 1 || w == x)
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	h;
	int	w;

	h = 1;
	while (h <= y)
	{
		w = 1;
		while (w <= x)
		{
			print_char(h, y, w, x);
			w++;
		}
		ft_putchar('\n');
		h++;
	}
}
