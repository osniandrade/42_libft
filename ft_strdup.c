/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 10:14:50 by ocarlos-          #+#    #+#             */
/*   Updated: 2020/02/18 16:45:00 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates sufficient memory for a copy of the string 'src', does the
** copy and returns a pointer to it.
*/

char	*ft_strdup(const char *src)
{
	char	*dst;
	int		size;

	size = ft_strlen(src);
	if (!(dst = malloc(size + 1)))
		return (NULL);
	ft_memcpy(dst, src, size);
	dst[size] = '\0';
	return (dst);
}
