/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muscakir <muscakir@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 19:16:20 by muscakir          #+#    #+#             */
/*   Updated: 2023/11/08 19:16:22 by muscakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int		w;
	int		h;

	h = -1;
	while (++h < y && y > 0 && x > 0)
	{
		w = -1;
		while (++w < x)
		{
			if (h == 0 && (w == (x - 1) || w == 0))
				ft_putchar('A');
			else if (h == (y - 1) && (w == 0 || w == (x - 1)))
				ft_putchar('C');
			else if ((w == 0) || (h == 0) || w == (x - 1) || (h == (y - 1)))
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
