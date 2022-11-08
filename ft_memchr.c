/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutuil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 21:26:27 by mboutuil          #+#    #+#             */
/*   Updated: 2022/10/16 21:44:05 by mboutuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmp;
	unsigned char	l;

	l = (unsigned char)c;
	tmp = (unsigned char *)s;
	while ((tmp[0] != l && --n))
			tmp++;
	if (tmp[0] == l)
		return (tmp);
	return (NULL);
}
