/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 10:53:29 by ocarlos-          #+#    #+#             */
/*   Updated: 2020/02/13 19:59:04 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Compares byte string 'src' against byte string 'dst'. Both strings
** are assumed to be 'n' bytes long. Returns '0' if strings are identical,
** otherwise returns '-1' if 'dst' is greater than 'src' or '1' if 'src' is
** greater than 'dst'.
*/

int		ft_memcmp(const void *dst, const void *src, unsigned int n)
{
	const unsigned char	*d;
	const unsigned char	*s;

	d = dst;
	s = src;
	while (n-- > 0)
		if (*d++ != *s++)
			return (d[-1] - s[-1]);
	return (0);
}
