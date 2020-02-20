/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 11:17:39 by ocarlos-          #+#    #+#             */
/*   Updated: 2020/02/14 14:37:01 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Locates the first occurrence of the NUL-terminated string 'chk' in
** string 'buf', where no more than 'n' characters are searched. Characters
** after a '\0' are not searched.
*/

char	*ft_strnstr(const char *buf, const char *chk, unsigned int n)
{
	unsigned int	i;
	unsigned int	chksize;

	chksize = ft_strlen(chk);
	if (!chksize)
		return ((char *)buf);
	i = 0;
	while (i < n)
	{
		if ((ft_strncmp((char *)&buf[i], (char *)chk, chksize)) == 0)
		{
			if ((chksize + i) > n)
				return (0);
			return ((char *)&buf[i]);
		}
		i++;
	}
	return (0);
}
