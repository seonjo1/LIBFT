/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonjo <seonjo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:00:50 by seonjo            #+#    #+#             */
/*   Updated: 2023/03/15 11:45:22 by seonjo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	char_cmp(char *haystack, char *needle, size_t i, size_t len)
{
	size_t	j;

	j = 0;
	while (needle[j])
	{
		if (i == len)
			return (2);
		if (haystack[i] == needle[j])
		{
			i++;
			j++;
		}
		else
			return (0);
	}
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		flag;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i])
	{
		if (i == len)
			return (0);
		if (haystack[i] == needle[0])
		{
			flag = char_cmp((char *)haystack, (char *)needle, i, len);
			if (flag == 1)
				return (&((char *)haystack)[i]);
			else if (flag == 2)
				return (0);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	printf("ft_strnstr : %s\n", ft_strnstr("abcdefghijklmn", "cdefghi", 12));
// 	printf("strnstr : %s\n", strnstr("abcdefghijklmn", "cdefghi", 12));
// }
