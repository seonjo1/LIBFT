/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonjo <seonjo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:06:52 by seonjo            #+#    #+#             */
/*   Updated: 2023/03/15 14:28:43 by seonjo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*d;
	size_t	i;

	i = 0;
	d = (char *)malloc(size * count);
	if (d == 0)
		return (0);
	while (i < size * count)
		d[i++] = 0;
	return ((void *)d);
}
