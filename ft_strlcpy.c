/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutuil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:35:09 by mboutuil          #+#    #+#             */
/*   Updated: 2022/10/13 14:41:51 by mboutuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dest,const char *src,size_t len)
{
	char *d = dest;
	char *e = dest + len ;
	const char *s = src;
	while (*s != '\0' && d < e)
		*d++ = *src++;
	if (d < e)
		*d = 0;
	else if (len > 0)
		d[-1] = 0;
	while(*s != '\0')
		s++;
	return s - src;
}
