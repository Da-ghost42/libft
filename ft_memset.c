/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutuil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 00:58:52 by mboutuil          #+#    #+#             */
/*   Updated: 2022/10/15 22:00:02 by mboutuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void *ft_memset(void *b,int c,size_t len)
{
	size_t i;
	unsigned char *str ;
	str = (unsigned char *)b;
	i = 0;
	while(i < len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return b;
}
