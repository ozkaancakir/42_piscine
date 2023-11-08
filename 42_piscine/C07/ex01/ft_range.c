/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muscakir <muscakir@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 19:15:14 by muscakir          #+#    #+#             */
/*   Updated: 2023/11/08 19:15:16 by muscakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	i;
	int	*arr;

	if (min >= max)
		return (0);
	len = max - min;
	arr = (int *)malloc(len * sizeof(int));
	if (!arr)
		return (0);
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}

/*int		main(void)
{
	int	min;
	int	max;
	int	*range;
	int	i = 0;
	int	len;

	min = 5;
	max = 10;
	len = max - min;
	range = ft_range(min, max);
	while(i < len)
	{
		printf("%d ", range[i]);
		i++;
	}
}*/
