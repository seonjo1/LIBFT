/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonjo <seonjo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:30:40 by seonjo            #+#    #+#             */
/*   Updated: 2023/03/13 20:40:33 by seonjo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*us;

	us = (unsigned char *)s;
	i = 0;
	while (i != n)
	{
		*us++ = 0;
		i++;
	}
}

// #include <stdio.h>
// int main(void)
// {
// 	char str[10] = "123456789";
// 	printf("%s\n", str);
// 	ft_bzero(str, 1);
// 	for (int i = 0; i < 9; i++)
// 		printf("i : %d , str[i] : %c \n", i, str[i]);
// 	return 0;
// }