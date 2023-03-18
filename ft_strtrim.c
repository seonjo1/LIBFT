/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonjo <seonjo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:40:21 by seonjo            #+#    #+#             */
/*   Updated: 2023/03/15 14:10:20 by seonjo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr2(const char *s, int c)
{
	while (c >= 256)
		c = c % 256;
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (0);
}

size_t	find(char const *s1, char const *set, size_t i, int option)
{
	if (option == 0)
	{
		while (ft_strchr2(set, (unsigned char)s1[i]))
			i++;
		return (i);
	}
	else
	{
		while (ft_strchr2(set, (unsigned char)s1[i]))
			i--;
		return (i);
	}
}

char	*empty_c(void)
{
	char	*s;

	s = (char *)malloc(sizeof(char));
	if (s == 0)
		return (0);
	*s = 0;
	return (s);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	l;
	size_t	i;
	size_t	j;
	char	*s;

	l = ft_strlen(s1);
	if (l == 0)
		return (empty_c());
	i = find(s1, set, 0, 0);
	if (i == l)
		return (empty_c());
	j = find(s1, set, l - 1, 1);
	s = (char *)malloc(sizeof(char) * (j - i + 2));
	if (s == 0)
		return (0);
	l = 0;
	while (i <= j)
		s[l++] = s1[i++];
	s[l] = 0;
	return (s);
}
