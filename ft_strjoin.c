/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 17:34:08 by ocarlos-          #+#    #+#             */
/*   Updated: 2020/02/27 13:08:58 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates and returns a new string, which is the result of the concatenation
** of ’s1’ and ’s2’.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		total;

	if (!s1 || !s2)
		return (NULL);
	total = (ft_strlen(s1) + ft_strlen(s2));
	if (!(result = (char *)malloc(sizeof(char) * total + 1)))
		return (NULL);
	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	ft_strlcpy(result, (char *)s1, ft_strlen(s1) + 1);
	ft_strlcat(result, (char *)s2, total + 1);
	return (result);
}
