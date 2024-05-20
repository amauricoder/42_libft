/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconceic <aconceic@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:00:49 by aconceic          #+#    #+#             */
/*   Updated: 2024/05/20 21:44:53 by aconceic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Outputs a single character to a specified file descriptor.
 * @param c The character to output.
 * @param fd The file descriptor to output to.
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

//Function description
//ft_putchar_fd writes a single character c to a specified file descriptor fd. 
//It's often used to output characters to a specific destination,
//like a file or console.