/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 12:52:33 by ocarlos-          #+#    #+#             */
/*   Updated: 2020/02/10 15:42:11 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Tests for any character for which 'isalpha' or 'isdigit'
** is true. Returns '0' if tests false or '1' if not.
*/

int		ft_isalnum(int ch)
{
	if (ch < 48 || (ch > 57 && ch < 65) ||
		(ch > 90 && ch < 97) || ch > 122)
		return (0);
	else
		return (1);
}
