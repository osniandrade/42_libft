/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 10:16:07 by ocarlos-          #+#    #+#             */
/*   Updated: 2020/02/14 13:57:14 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies 'n' bytes from string 'src' to string 'dst'. The copy
** is always non-destructive. Returns the original value of 'dst'.
*/

void	*ft_memmove(void *dst, const void *src, unsigned int n)
{
	char		*d;
	const char	*s;
	char		*lasts;
	char		*lastd;

	d = dst;
	s = src;
	if (!s && !d)
		return (NULL);
	if (d < s)
		while (n--)
			*d++ = *s++;
	else
	{
		lasts = (char *)s + (n - 1);
		lastd = d + (n - 1);
		while (n--)
			*lastd-- = *lasts--;
	}
	return (dst);
}
