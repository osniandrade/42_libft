/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 17:14:02 by ocarlos-          #+#    #+#             */
/*   Updated: 2020/02/17 11:16:54 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Writes string 'buf' to file descriptor 'fd'.
*/

void	ft_putstr_fd(char *buf, int fd)
{
	if (buf)
		while (*buf != '\0')
			ft_putchar_fd(*buf++, fd);
}
