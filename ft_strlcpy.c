/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonjo <seonjo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:42:17 by seonjo            #+#    #+#             */
/*   Updated: 2023/03/13 21:47:48 by seonjo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	int		i;
	size_t	j;
	size_t	n;

	i = 0;
	j = 0;
	n = size;
	if (n != 0)
	{
		while (n > 1)
		{
			if (src[i])
			{
				dest[i] = src[i];
				i++;
			}
			n--;
		}
		dest[i] = 0;
	}
	while (src[j])
	{
		j++;
	}
	return (j);
}
