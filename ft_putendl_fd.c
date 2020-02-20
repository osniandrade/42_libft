/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 15:16:21 by ocarlos-          #+#    #+#             */
/*   Updated: 2020/02/10 17:40:44 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Writes string 'buf' to file descriptor 'fd'.
*/

void	ft_putendl_fd(char *buf, int fd)
{
	ft_putstr_fd(buf, fd);
	ft_putchar_fd('\n', fd);
}
