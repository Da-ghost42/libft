/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutuil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 02:12:38 by mboutuil          #+#    #+#             */
/*   Updated: 2022/10/28 02:12:41 by mboutuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int	nbr;

	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = (unsigned int)(nb * -1);
	}
	else
		nbr = (unsigned int)nb;
	if (nbr >= 10)
		ft_putnbr_fd(nbr / 10, fd);
	ft_putchar_fd((char)(nbr % 10 + 48), fd);
}
// void	ft_putnbr_fd(int n,int fd)
// {
// 	if (n < 0)
// 	{
// 		ft_putchar_fd('-',fd);
// 		n = -n;
// 	}
// 	if (n < 10)
// 		ft_putchar_fd(n + 48,fd);
// 	if (n > 9)
// 	{
// 		ft_putnbr_fd(n / 10,fd);
// 		ft_putnbr_fd(n % 10,fd);
// 	}
// }
