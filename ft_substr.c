/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonjo <seonjo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:46:31 by seonjo            #+#    #+#             */
/*   Updated: 2023/03/19 16:34:53 by seonjo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*make_emptystr(void)
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
	size_t	st;
	size_t	j;

	st = (size_t)start;
	j = 0;
	l = ft_strlen(s);
	if (st >= l)
		return (make_emptystr());
	if (l > len + st)
		l = len;
	else
		l -= st;
	c = (char *)malloc(sizeof(char) * (l + 1));
	if (c == 0)
		return (0);
	while (j < l)
		c[j++] = s[st++];
	c[j] = 0;
	return (c);
}
