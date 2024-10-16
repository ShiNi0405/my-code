/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytan-wei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 17:43:37 by ytan-wei          #+#    #+#             */
/*   Updated: 2024/10/06 18:47:18 by slai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	print_char(int h, int y, int w, int x)
{
	if (w == 1 && (h == y || h == 1))
	{
		ft_putchar('A');
	}
	else if (w == x && (h == y || h == 1))
	{
		ft_putchar('C');
	}
	else if ((h == 1 || h == y) || (w == 1 || w == x))
	{
		ft_putchar('B');
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
