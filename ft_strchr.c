/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 15:02:24 by ocarlos-          #+#    #+#             */
/*   Updated: 2020/02/12 13:23:48 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Locates the first occurrence of 'ch' in the string pointed to by 'buf'.
** The terminating null character is considered to be part of the string -
** therefore, if 'ch' is '\0', the function locates the terminatting '\0'.
** Returns a pointer to the located character or NULL if not found.
*/

char	*ft_strchr(const char *buf, int ch)
{
	char			*buffer;

	buffer = (char *)buf;
	while (*buffer != '\0')
		if (*buffer++ == (char)ch)
			return (--buffer);
	if ((ch == '\0') && (*buffer == '\0'))
		return (buffer);
	return (0);
}
