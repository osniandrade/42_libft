/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 12:55:42 by ocarlos-          #+#    #+#             */
/*   Updated: 2020/02/21 15:01:41 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies up to 'dstsize' - 1 characters from string 'src' to 'dst', NUL-terminating
** the result if 'dstsize' is not 0.
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int		i;
	int		old;

	i = -1;
	old = 0;
	if (!dst)
		return (0);
	while (src[old] != '\0')
		old++;
	if (dstsize == 0)
		return (old);
	if (dstsize > 0)
		while ((src[++i] != '\0') && (i < (int)(dstsize - 1)))
			dst[i] = src[i];
	dst[i] = '\0';
	return (old);
}
