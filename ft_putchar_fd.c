/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 17:14:56 by ocarlos-          #+#    #+#             */
/*   Updated: 2020/02/18 16:44:21 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Writes character 'ch' to file descriptor 'fd'.
*/

void	ft_putchar_fd(char ch, int fd)
{
	unsigned char	c;

	c = (unsigned char)ch;
	write(fd, &c, 1);
}
