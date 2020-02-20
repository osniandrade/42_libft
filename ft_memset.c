/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 09:38:34 by ocarlos-          #+#    #+#             */
/*   Updated: 2020/02/14 13:43:20 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Writes 'n' bytes of value 'c' to the string 'buf'.
** Returns its first argument.
*/

void	*ft_memset(void *buf, int c, unsigned int n)
{
	char	*start;

	start = buf;
	while (n--)
		*start++ = c;
	return (buf);
}
