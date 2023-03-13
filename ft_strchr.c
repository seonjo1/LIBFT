/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonjo <seonjo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 19:59:29 by seonjo            #+#    #+#             */
/*   Updated: 2023/03/13 20:37:53 by seonjo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}	
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("%s",ft_strchr("abcdemfghijklmn", 'm'));
// 	return (0);
// }