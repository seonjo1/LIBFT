/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonjo <seonjo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 19:44:18 by seonjo            #+#    #+#             */
/*   Updated: 2023/03/14 20:26:26 by seonjo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
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
// 	char dest[60] = "";
// 	char a[60] = "s0wJEqQRP/SsxEdB:CnR /zF@^B5f{#*HAP1=U4;2$\\56sU';";
// 	printf("%s", ft_memcpy(dest, a, 59));
// 	return 0;
// }