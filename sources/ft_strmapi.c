/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconceic <aconceic@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:59:00 by aconceic          #+#    #+#             */
/*   Updated: 2024/05/20 21:55:25 by aconceic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Applies a mapping function f to each character of string s and returns
 * a new string with the mapped characters. It ensures proper memory allocation.
 * @return The new string with the mapped characters.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*res;

	res = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		res[i] = f(i, s[i]);
		i ++;
	}
	res[i] = '\0';
	return (res);
}
/*
#include <stdio.h>

static	char test_func(unsigned int index, char c)
{	
	printf("Index => %d\n Char => %c\n", index, c);
	c = c - 32;
	return (c);
}
int	main(void)
{
	char *res;
	char *test;
	
	test = "test";
	res = ft_strmapi(test, test_func);
	printf("%s", res);
} */