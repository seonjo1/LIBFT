/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonjo <seonjo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:11:58 by seonjo            #+#    #+#             */
/*   Updated: 2023/03/14 20:25:50 by seonjo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*a;

	i = 0;
	a = (unsigned char *)b;
	while (i != len)
	{
		*a++ = (unsigned char)c;
		i++;
	}
	return (b);
}

// #include <stdio.h>
// int main(void)
// {
// 	char arr[1] = "abcdefghidsf";
// 	ft_memset(arr, 'v', 13);
// 	printf("%s",arr);
// 	return 1;
// }