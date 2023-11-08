/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muscakir <muscakir@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 19:15:19 by muscakir          #+#    #+#             */
/*   Updated: 2023/11/08 19:15:21 by muscakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;
	int	*d;

	if (min >= max)
		return (0);
	len = max - min;
	d = (int *)malloc(len * sizeof(int));
	if (!d)
		return (-1);
	*range = d;
	i = 0;
	while (i < len)
	{
		d[i] = min;
		min++;
		i++;
	}
	return (len);
}

/*int		main(void)
{
	int	min;
	int	max;
	int	*range;
	int	len;
	int	i = 0;

	min = 5;
	max = 10;
	len = ft_ultimate_range(&range, min, max);
	while(i < len)
	{
		printf("%d ", range[i]);
		i++;
	}

}*/
