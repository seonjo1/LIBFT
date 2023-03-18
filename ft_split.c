/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonjo <seonjo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:24:46 by seonjo            #+#    #+#             */
/*   Updated: 2023/03/15 22:12:37 by seonjo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	find_str_num(char const *s, char c, size_t j, int opt)
{
	size_t	n;
	size_t	i;

	if (opt == 0)
	{
		i = 0;
		n = 0;
		while (s[i] != 0)
		{
			if (s[i] != c && (s[i + 1] == c || s[i + 1] == 0))
				n++;
			i++;
		}
		return (n);
	}
	else
	{
		while (s[j] == c)
			j++;
		return (j);
	}
}

int	make_arr(char *arr, char const *s, char c, size_t j)
{
	size_t	index;
	size_t	i;

	i = 0;
	index = j;
	while (s[index] != c && s[index])
		arr[i++] = s[index++];
	arr[i] = 0;
	return (index);
}

size_t	get_len2(char const *s, char c, size_t j)
{
	size_t	len;

	len = 0;
	while (s[j] != c && s[j])
	{
		j++;
		len++;
	}
	return (len);
}

char	**allfree(char **arr, size_t i)
{
	size_t	j;

	j = 0;
	while (j < i)
		free(arr[j++]);
	free(arr);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	len;
	size_t	i;
	size_t	j;
	char	**arr;

	i = 0;
	j = 0;
	len = find_str_num(s, c, j, 0);
	arr = (char **)malloc(sizeof(char *) * (len + 1));
	if (arr == 0)
		return (0);
	while (i < len)
	{
		j = find_str_num(s, c, j, 1);
		if (s[j] == 0)
			break ;
		arr[i] = (char *)malloc(sizeof(char) * (get_len2(s, c, j) + 1));
		if (arr[i] == 0)
			return (allfree(arr, i));
		j = make_arr(arr[i++], s, c, j);
	}
	arr[i] = 0;
	return (arr);
}

// #include <string.h>
// #include <stdio.h>
// int	main(void)
// {
// 	char **arr;
// 	char string[] = "hello!zzz";
// 	arr = ft_split(string, 'z');
// 	int i = 0;
// 	while (i < 2)
// 		printf("%s\n",arr[i++]);
// }
