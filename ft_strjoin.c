/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 17:34:08 by ocarlos-          #+#    #+#             */
/*   Updated: 2020/02/18 16:45:06 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *buf1, char const *buf2)
{
	char	*result;
	int		total;

	if (!buf1 || !buf2)
		return (NULL);
	total = (ft_strlen(buf1) + ft_strlen(buf2));
	if (!(result = (char *)malloc(sizeof(char) * total + 1)))
		return (NULL);
	if (!buf1 && !buf2)
		return (NULL);
	if (!buf1)
		return (ft_strdup(buf2));
	if (!buf2)
		return (ft_strdup(buf1));
	ft_strlcpy(result, (char *)buf1, ft_strlen(buf1) + 1);
	ft_strlcat(result, (char *)buf2, total + 1);
	return (result);
}
