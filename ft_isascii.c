/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 14:53:16 by ocarlos-          #+#    #+#             */
/*   Updated: 2020/02/10 15:47:13 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Tests for any character on ascii table. Returns '0' if false
** or '1' if true.
*/

int		ft_isascii(int ch)
{
	if ((ch >= 0) && (ch <= 127))
		return (1);
	else
		return (0);
}
