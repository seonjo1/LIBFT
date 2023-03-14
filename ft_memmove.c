/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonjo <seonjo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 22:04:05 by seonjo            #+#    #+#             */
/*   Updated: 2023/03/14 22:40:48 by seonjo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (dst < src)
	{
		i = 0;
		while (i++ < len)
			*d++ = *s++;
	}
	else
	{
		if (len != 0)
		{
			i = len - 1;
			s += i;
			d += i;
			while (i-- > 0)
				*d-- = *s--;
			*d = *s;
		}
	}
	return (dst);
}
