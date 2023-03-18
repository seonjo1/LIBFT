/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonjo <seonjo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:46:31 by seonjo            #+#    #+#             */
/*   Updated: 2023/03/15 20:24:41 by seonjo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*make_emptystr(void)
{
	char	*c;

	c = (char *)malloc(sizeof(char));
	if (c == 0)
		return (0);
	*c = 0;
	return (c);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*c;
	size_t	l;
	size_t	i;
	size_t	j;

	i = (size_t)start;
	j = 0;
	l = ft_strlen(s);
	if (i >= l)
		return (make_emptystr());
	if (l - i > len)
		l = len;
	else
		l -= i;
	c = (char *)malloc(sizeof(char) * (l + 1));
	if (c == 0)
		return (0);
	while (j < l)
		c[j++] = s[i++];
	c[j] = 0;
	return (c);
}
