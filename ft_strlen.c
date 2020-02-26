/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 12:47:48 by ocarlos-          #+#    #+#             */
/*   Updated: 2020/02/21 15:02:30 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Computes the length of the string 's' and returns it as an integer.
*/

size_t		ft_strlen(const char *s)
{
	size_t		i;

	i = 0;
	while (*s++ != '\0')
		i++;
	return (i);
}
