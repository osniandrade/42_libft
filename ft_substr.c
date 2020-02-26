/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 09:48:19 by ocarlos-          #+#    #+#             */
/*   Updated: 2020/02/21 13:20:44 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates and returns a substring from the string 's'. The substring
** begins at index 'start' and is of maximum size 'n'.
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;

	if (!s)
		return (NULL);
	if (!(result = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (start > (ft_strlen(s) - len))
		return (ft_strdup(""));
	ft_strlcpy(result, &s[start], len + 1);
	return (result);
}
