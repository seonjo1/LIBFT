/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonjo <seonjo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 19:44:18 by seonjo            #+#    #+#             */
/*   Updated: 2023/03/15 14:21:00 by seonjo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (dst == 0 && src == 0)
		return (0);
	while (i < n)
	{
		*d++ = *s++;
		i++;
	}
	return (dst);
}

// #include <string.h>
// #include <stdio.h>

// int main(void)
// {
// 	// char dest[60] = "";
// 	// char a[60] = "";
// 	printf("%s", memcpy(0, 0, 30));
// 	return 0;
// }
