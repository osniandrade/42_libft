/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 12:54:53 by ocarlos-          #+#    #+#             */
/*   Updated: 2020/02/10 18:01:36 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Converts an upper-case letter to the corresponding lower-case letter.
*/

int		ft_tolower(int ch)
{
	if ((ch >= 65) && (ch <= 90))
		ch += 32;
	return (ch);
}
