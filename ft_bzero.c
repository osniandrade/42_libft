/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 12:28:24 by ocarlos-          #+#    #+#             */
/*   Updated: 2020/02/14 13:44:12 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Writes n zeroed bytes to the string buf.
** If n is zero, does nothing.
*/

void	*ft_bzero(void *buf, unsigned int n)
{
	char	*start;

	start = buf;
	while (n--)
		*start++ = 0;
	return (buf);
}
