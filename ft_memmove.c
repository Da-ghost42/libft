/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutuil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:42:22 by mboutuil          #+#    #+#             */
/*   Updated: 2022/10/16 12:03:54 by mboutuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
void *ft_memmove(void *dst, const void *src,size_t len)
{
	unsigned char *ndst;
	unsigned char *nsrc;
	
	ndst = (unsigned char *)dst;
	nsrc = (unsigned char *)src;
	if(dst < src)
		return (ft_memcpy(ndst,nsrc,len));
	if (dst > src)
		while(len--)
			ndst[len] = nsrc[len];
return dst ;
}

/*	
int main(void)
{
	// char a[8]= "Abdellah";

	//ft_memmove(a + 3, a + 4, 4);
	
	printf("%s\n",ft_memmove("", "", 4));
}
*/