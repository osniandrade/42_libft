/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 15:07:56 by ocarlos-          #+#    #+#             */
/*   Updated: 2020/02/19 20:17:53 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates and returns an array of strings obtained by splitting
** ’buf’ using the character ’ch’ as a delimiter.  The array must be
** ended by a NULL pointer.
*/

char	**ft_setarray(char *temp, char ch)
{
	int		words;
	int		i;
	int		size;

	i = 0;
	words = 0;
	size = ft_strlen(temp);
	while (temp[i] != '\0' && i < size)
	{
		if (temp[i] != ch)
		{
			words++;
			while (temp[i] != ch && temp[i + 1] != '\0')
				i++;
		}
		i++;
	}
	return ((char **)malloc(sizeof(char *) * (words + 1)));
}

int		*ft_setdelim(char *temp, char ch)
{
	int		i;

	i = 0;
	while (temp[i] != '\0')
	{
		if (temp[i] == ch)
			temp[i] = '\0';
		i++;
	}
	return (0);
}

int		*ft_setnull(int *i)
{
	i[0] = 0;
	i[1] = 0;
	i[2] = 0;
	return (0);
}

char	**ft_split(char const *buf, char ch)
{
	char	**result;
	char	*temp;
	int		i[3];

	if (!buf || !ch || !(temp = ft_strdup(buf)) ||
		!(result = ft_setarray(temp, ch)))
		return (NULL);
	ft_setnull(i);
	i[0] = ft_strlen(temp);
	ft_setdelim(temp, ch);
	while (i[2] < i[0])
	{
		if (temp[i[2]] == '\0')
			i[2]++;
		else
		{
			if (!(result[i[1]++] = ft_strdup(&temp[i[2]])))
				return (NULL);
			i[2] += ft_strlen(&temp[i[2]]);
		}
	}
	result[i[1]] = NULL;
	return (result);
}
