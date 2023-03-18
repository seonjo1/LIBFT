/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonjo <seonjo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:32:30 by seonjo            #+#    #+#             */
/*   Updated: 2023/03/15 13:10:37 by seonjo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		l;
	char	*dest;

	l = 0;
	while (s1[l])
			l++;
	dest = (char *)malloc(sizeof(char) * (l + 1));
	if (dest == 0)
		return (0);
	l = 0;
	while (s1[l])
	{
			dest[l] = s1[l];
			l++;
	}
	dest[l] = 0;
	return (dest);
}
