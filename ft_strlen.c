/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 12:47:48 by ocarlos-          #+#    #+#             */
/*   Updated: 2020/02/10 17:50:49 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Computes the length of the string 'buf' and returns it as an integer.
*/

int		ft_strlen(const char *buf)
{
	int		i;

	i = 0;
	while (buf[i])
		i++;
	return (i);
}
