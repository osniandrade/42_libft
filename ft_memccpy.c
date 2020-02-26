/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 18:54:48 by ocarlos-          #+#    #+#             */
/*   Updated: 2020/02/21 13:35:27 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies bytes from the string 'src' to string 'dest'. If character 'c'
** occurs in the string 'src', the copy stops and a pointer to the byte
** after the copy of 'c' in the string 'dest' if returned. Otherwise, 'n'
** bytes are copied and a 'NULL' pointer is returned.
*/

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char					*d;
	const unsigned char		*s;
	unsigned int			i;

	i = 0;
	d = dest;
	s = (unsigned char *)src;
	while ((i < n) && ((i == 0) || (s[i - 1] != (unsigned char)c)))
	{
		d[i] = s[i];
		if (d[i++] == (unsigned char)c)
			return (d + i);
	}
	return (NULL);
}
