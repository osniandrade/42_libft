/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 10:27:14 by ocarlos-          #+#    #+#             */
/*   Updated: 2020/03/02 18:46:04 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Locates the first occurrence of 'c' character in string 's'.
** Returns a pointer to the byte located or 'NULL' if no such byte
** exists within 'n' bytes.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	char			*b;

	b = (void *)s;
	while (n--)
		if (*b++ == (char)c)
			return (&b[-1]);
	return (NULL);
}
