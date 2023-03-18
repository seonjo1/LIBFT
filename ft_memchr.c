/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonjo <seonjo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 21:52:28 by seonjo            #+#    #+#             */
/*   Updated: 2023/03/15 11:44:03 by seonjo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	while (c > 255)
		c = c % 256;
	while (i < n)
	{
		if (*str == (unsigned char)c)
			return ((void *)str);
		i++;
		str++;
	}
	return (0);
}
