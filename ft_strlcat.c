/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutuil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 22:08:12 by mboutuil          #+#    #+#             */
/*   Updated: 2022/10/13 22:49:08 by mboutuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t ft_strlcat(char *dst,const char *src, size_t dstsize)
{
	size_t dlen,dsrc,i,j;
	dlen = ft_strlen(dst);
	dsrc = ft_strlen(src);

	i = dlen;
	j = 0;
	while(*(src + j) != '\0')
	{
		*(dst + i) = *(src + j);
		i++;
		j++;
		if(i == dstsize - 1)
			break;
	}
	
	//*(dst + i) != '\0';
	return (dlen + dsrc);
}



