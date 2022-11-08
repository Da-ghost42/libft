/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutuil <mboutuil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 21:18:03 by mboutuil          #+#    #+#             */
/*   Updated: 2022/11/07 13:36:15 by mboutuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	p;

	p = (unsigned char)c;
	while (*s)
	{
		if (*s == p)
			return ((char *)s);
		s++;
	}
	if (p == '\0')
		return ((char *) s);
	return (0);
}
