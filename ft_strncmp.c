/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 12:59:40 by ocarlos-          #+#    #+#             */
/*   Updated: 2020/02/12 17:31:57 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Compares no more than 'n' characters of string 'src' to 'dst'.
** Characters after a '\0' are not compared.
*/

int		ft_strncmp(char *dst, char *src, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while (!((dst[i] == '\0') && (src[i] == '\0')) && (i < n))
	{
		if (dst[i] != src[i])
		{
			return ((unsigned char)dst[i] - (unsigned char)src[i]);
		}
		i++;
	}
	return (0);
}
