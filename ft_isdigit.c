/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 14:57:55 by ocarlos-          #+#    #+#             */
/*   Updated: 2020/02/10 15:48:59 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Tests for any numeric value, from '0' to '9'. Returns '0'
** if false and '1' if true.
*/

int		ft_isdigit(int ch)
{
	if ((ch >= 48) && (ch <= 57))
		return (1);
	else
		return (0);
}
