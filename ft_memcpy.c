/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nencpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutuil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 08:04:33 by mboutuil          #+#    #+#             */
/*   Updated: 2022/10/15 21:50:03 by mboutuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void *ft_memcpy(void * dst , const void  * src , size_t n)
{
	unsigned char *p;
	unsigned char *q;
	size_t i;
	p = (unsigned char *)dst;
	q = (unsigned char *)src;

	if(p == q)
		return p;
	// if (!dst && !src)
	// 	return (0);
		i = 0;
	while (i < n)
	{
		*p = *q;
		p++;
		q++;
		i++;
	}
	return dst ;
}


int main()
{
	char t[] = "lol";
	char t2[] = "lol";
		printf("%s\n",ft_memcpy(t,t2,-1));
// 		printf("%s\n",memcpy(t,t2,3));


}

