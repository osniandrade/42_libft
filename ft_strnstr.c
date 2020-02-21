/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 11:17:39 by ocarlos-          #+#    #+#             */
/*   Updated: 2020/02/21 15:19:22 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Locates the first occurrence of the NUL-terminated string 'needle' in
** string 'haystack', where no more than 'n' characters are searched. Characters
** after a '\0' are not searched.
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	chksize;

	chksize = ft_strlen(needle);
	if (!chksize)
		return ((char *)haystack);
	i = 0;
	while (i < len)
	{
		if ((ft_strncmp((char *)&haystack[i], (char *)needle, chksize)) == 0)
		{
			if ((chksize + i) > len)
				return (0);
			return ((char *)&haystack[i]);
		}
		i++;
	}
	return (0);
}
