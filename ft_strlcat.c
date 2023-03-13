/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonjo <seonjo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:48:56 by seonjo            #+#    #+#             */
/*   Updated: 2023/03/13 20:59:47 by seonjo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_d;
	size_t	len_s;
	size_t	i;

	len_d = ft_strlen(dest);
	len_s = ft_strlen(src);
	i = len_d;
	if (size <= len_d)
		return (len_s + size);
	if (*src)
	{
		while (size > 1 + i)
		{
			if (*src)
			{
				dest[i] = *src;
				i++;
				src++;
			}
			else
				break ;
		}
	dest[i] = 0;
	}
	return (len_s + len_d);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char a[10] = "abcd";
// 	char b[10] = "abcd";
// 	printf("ft_strlcat : %zu   %s\n", ft_strlcat(a, "aa", 8), a);
// 	printf("strlcat : %lu   %s\n", strlcat(b, "aa", 8), b);
// }