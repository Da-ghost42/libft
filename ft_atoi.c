/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutuil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 00:15:52 by mboutuil          #+#    #+#             */
/*   Updated: 2022/11/04 22:11:36 by mboutuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_atoi(const char *str)
{
	int		s;
	long	n;

	s = 1;
	n = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while ((*str == '+' || *str == '-'))
	{
		if (*str + 1 != '+' && *str + 1 != '-')
		{
			if (*str == '-')
				s = s * -1;
		}
		else
			return (0);
		str++;
	}
	while (ft_isdigit(*str) == 1)
		n = (n * 10) + (*str++ - '0');
	return (n * s);
}
