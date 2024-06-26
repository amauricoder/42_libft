/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconceic <aconceic@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:08:24 by aconceic          #+#    #+#             */
/*   Updated: 2024/05/20 21:42:45 by aconceic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The ft_memmove function copies n bytes from source memory src to
 * destination memory dest and returns a pointer to dest.
 * It ensures proper copying even if the memory regions overlap.
 * @return A pointer to the destination memory.
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	len;

	if (src == dest)
		return (dest);
	if (src < dest)
	{
		len = n;
		while (len-- > 0)
			((unsigned char *)dest)[len] = ((unsigned char *)src)[len];
	}
	else
	{
		len = 0;
		while (len < n)
		{
			((unsigned char *)dest)[len] = ((unsigned char *)src)[len];
			len ++;
		}
	}
	return (dest);
}
/* 
//ft_memmove copies n bytes from source src to destination dest, 
//accounting for overlapping memory regions. 
//It returns a pointer to the destination.
#include <stdio.h>

int	main(void)
{
	
	char	dest[] = "destiny";
	char	sorc[] = "source";
	char	dest_b[] = "destiny";
	char	sorc_b[] = "source";
	size_t	size = 5;
	char	*ret_ori;
	char	*ret_rec;
	
	ret_ori = memmove(dest, sorc, size);
	printf("%s\n", ret_ori);	
	
	ret_rec = ft_memmove(dest_b, sorc_b, size);
	printf("%s\n", ret_rec);	
	
} */