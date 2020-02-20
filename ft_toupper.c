/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 12:54:23 by ocarlos-          #+#    #+#             */
/*   Updated: 2020/02/10 18:01:50 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Converts an lower-case letter to the corresponding upper-case letter.
*/

int		ft_toupper(int ch)
{
	if ((ch >= 97) && (ch <= 122))
		ch -= 32;
	return (ch);
}
