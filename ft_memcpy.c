/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutuil <mboutuil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 08:04:33 by mboutuil          #+#    #+#             */
/*   Updated: 2022/11/07 13:22:15 by mboutuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*p;
	unsigned char	*q;
	size_t			i;

	p = (unsigned char *)dst;
	q = (unsigned char *)src;
	if (p == q)
		return (p);
		i = 0;
	while (i < n)
	{
		*p = *q;
		p++;
		q++;
		i++;
	}
	return (dst);
}
