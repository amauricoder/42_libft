/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconceic <aconceic@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 19:04:44 by aconceic          #+#    #+#             */
/*   Updated: 2024/05/20 21:43:56 by aconceic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The ft_memset function fills n bytes of memory at s with the value c
 * and returns a pointer to the memory.
 * @return A pointer to the memory.
*/
void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*a;

	a = (unsigned char *)s;
	i = 0;
	while (n > i)
	{
		a[i] = c;
		i ++;
	}
	return (s);
}
/* 
//function description
//ft_memset fills n bytes of memory at s with the value c 
//and returns a pointer to the memory

#include <stdio.h>

int main() {
    char buffer[10];
    char fill_char = 'A';
    size_t num_bytes = sizeof(buffer);

    ft_memset(buffer, fill_char, num_bytes);

    for (size_t i = 0; i < num_bytes; i++) {
        printf("%c ", buffer[i]);
    }
    printf("\n");

    return 0;
} */