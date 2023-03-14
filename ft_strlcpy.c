/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonjo <seonjo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:42:17 by seonjo            #+#    #+#             */
/*   Updated: 2023/03/14 18:42:09 by seonjo           ###   ########.fr       */
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

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	n;

	i = 0;
	j = 0;
	n = ft_strlen(src);
	if (size > 0)
	{
		while (size > 1 && i < n)
		{
			if (src[i])
			{
				dest[i] = src[i];
				i++;
			}
			size--;
		}
		dest[i] = 0;
	}
	while (src[j])
		j++;
	return (j);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char a[10] = "abc";
// 	char b[10] = "";
// 	//printf("%lu", ft_strlcpy(a, b, -1));
// 	printf("%lu\n", strlcpy(a, b, 42));
// 	printf("%s\n",a);
//}
