/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muscakir <muscakir@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 19:15:06 by muscakir          #+#    #+#             */
/*   Updated: 2023/11/08 19:15:08 by muscakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		slen;
	int		i;

	slen = ft_strlen(src);
	str = (char *)malloc(slen * sizeof(char));
	if (!str)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int		main(void)
{
	char	*str;
	char	*allocated;

	str = "Hello World!";
	printf("%s %p\n", str, str);
	allocated = ft_strdup(str);
	printf("%s %p\n", allocated, allocated);
}*/
