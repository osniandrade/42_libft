/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 18:54:48 by ocarlos-          #+#    #+#             */
/*   Updated: 2020/02/14 13:53:05 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies bytes from the string 'src' to string 'dst'. If character 'c'
** occurs in the string 'src', the copy stops and a pointer to the byte
** after the copy of 'c' in the string 'dst' if returned. Otherwise, 'n'
** bytes are copied and a 'NULL' pointer is returned.
*/

void	*ft_memccpy(void *dst, const void *src, int c, unsigned int n)
{
	char					*d;
	const unsigned char		*s;
	unsigned int			i;

	i = 0;
	d = dst;
	s = (unsigned char *)src;
	while ((i < n) && ((i == 0) || (s[i - 1] != (unsigned char)c)))
	{
		d[i] = s[i];
		if (d[i++] == (unsigned char)c)
			return (d + i);
	}
	return (NULL);
}
