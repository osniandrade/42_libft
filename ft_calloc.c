/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 12:35:57 by ocarlos-          #+#    #+#             */
/*   Updated: 2020/02/18 16:43:10 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Contiguouly allocates enough space for 'num' objects that are
** 'size' bytes of memory each and returns a pointer to the
** allocated memory. The allocated memory is filled with
** bytes of value zero. Returns 'NULL' if there is an error.
*/

void	*ft_calloc(unsigned int num, unsigned int size)
{
	void	*ptr;

	ptr = malloc(num * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, num * size);
	return (ptr);
}
