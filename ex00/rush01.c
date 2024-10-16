/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytan-wei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 17:43:37 by ytan-wei          #+#    #+#             */
/*   Updated: 2024/10/06 18:46:43 by slai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	print_char(int h, int y, int w, int x)
{
	if ((h == 1 && w == 1) || (h == y && w == x))
	{
		ft_putchar('/');
	}
	else if ((h == 1 && w == x) || (h == y && w == 1))
	{
		ft_putchar('\\');
	}
	else if ((h == 1 || h == y) || (w == 1 || w == x))
	{
		ft_putchar('*');
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
