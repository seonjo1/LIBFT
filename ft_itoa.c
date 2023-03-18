/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonjo <seonjo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 20:22:49 by seonjo            #+#    #+#             */
/*   Updated: 2023/03/15 20:59:13 by seonjo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_len(int n)
{
	int	size;

	size = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		size++;
	while (n)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char			*s;
	long long		num;
	int				size;

	num = n;
	size = get_len(n);
	s = (char *)malloc(sizeof(char) * (size + 1));
	if (s == 0)
		return (0);
	if (num == 0)
		s[0] = '0';
	if (num < 0)
	{
		s[0] = '-';
		num = -num;
	}
	s[size--] = 0;
	while (num)
	{
		s[size--] = num % 10 + '0';
		num = num / 10;
	}
	return (s);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("%s\n", ft_itoa(-2147483648));
// }