/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 09:48:19 by ocarlos-          #+#    #+#             */
/*   Updated: 2020/02/19 16:58:46 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates and returns a substring from the string 's'. The substring
** begins at index 'start' and is of maximum size 'n'.
*/

char	*ft_substr(char const *buf, unsigned int start, unsigned int n)
{
	char	*result;

	if (!buf)
		return (NULL);
	if (!(result = (char *)malloc(sizeof(char) * n + 1)))
		return (NULL);
	if (start > (ft_strlen(buf) - n))
		return (ft_strdup(""));
	ft_strlcpy(result, &buf[start], n + 1);
	return (result);
}
