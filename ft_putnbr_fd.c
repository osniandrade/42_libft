/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 17:15:32 by ocarlos-          #+#    #+#             */
/*   Updated: 2020/02/10 17:41:46 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Converts integer 'nb' to char and writes to file descriptor 'fd'.
*/

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int num;

	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		num = nb * -1;
	}
	else
		num = nb;
	if (num < 10)
		ft_putchar_fd(num + '0', fd);
	if ((num / 10) > 0)
	{
		ft_putnbr_fd(num / 10, fd);
		ft_putchar_fd(num % 10 + '0', fd);
	}
}
