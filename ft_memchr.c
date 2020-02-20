/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 10:27:14 by ocarlos-          #+#    #+#             */
/*   Updated: 2020/02/14 13:59:31 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Locates the first occurrence of 'ch' character in string 'buf'.
** Returns a pointer to the byte located or 'NULL' if no such byte
** exists within 'n' bytes.
*/

void	*ft_memchr(const void *buf, int ch, unsigned int n)
{
	char			*b;

	b = (void *)buf;
	while (n--)
		if (*b++ == (char)ch)
			return (&b[-1]);
	return (NULL);
}
