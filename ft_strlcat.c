/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 13:00:35 by ocarlos-          #+#    #+#             */
/*   Updated: 2020/02/18 17:01:02 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Appends string 'src' to the end of 'dst'. Will NUL-terminate unless
** 'n' is 0 or the original 'dst' string was incorrect.
*/

size_t	ft_strlcat(char *dst, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	size;

	i = 0;
	j = 0;
	size = 0;
	while (src[size] != '\0')
		size++;
	while (dst[i] && (i < n))
		i++;
	while (src[j] && ((i + j + 1) < n))
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i != n)
		dst[i + j] = '\0';
	return (i + size);
}
