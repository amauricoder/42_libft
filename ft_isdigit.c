/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconceic <aconceic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:11:17 by aconceic          #+#    #+#             */
/*   Updated: 2023/10/19 20:21:36 by aconceic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (2048);
	else
		return (0);
}
/* 
//Function Description
//Verify if a character is a number
//returns a positive number if true(2048 in this case) and 0 if not
#include <stdio.h>

int	main(void)
{
	char	test = 'A';
	char	test1 = 'a';
	char	test2 = '@';
	char	test3 = '1';
	
	printf("%d\n", ft_isdigit(test));
	printf("%d\n", ft_isdigit(test1));
	printf("%d\n", ft_isdigit(test2));
	printf("%d\n", ft_isdigit(test3));
}
*/