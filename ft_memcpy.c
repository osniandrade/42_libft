/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 11:48:53 by ocarlos-          #+#    #+#             */
/*   Updated: 2020/02/21 13:34:45 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies 'n' bytes from memory area 'src' to memory area 'dest'.
** Returns a pointer to 'dest' memory area or 'NULL' if src is empty.
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char			*d;
	const char		*s;

	d = dest;
	s = src;
	if (!s && !d)
		return (NULL);
	while (n--)
		*d++ = *s++;
	return (dest);
}
