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

size_t		ft_strlcpy(char *dest, const char *src, size_t len)
{
	size_t	lsrc;
	size_t	i;

	lsrc = 0;
	while (src[lsrc] != '\0')
		lsrc++;
	if (len == 0)
		return (lsrc);
	i = 0;
	while (src[i] != '\0' && i < (len - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (lsrc);
}

// // int main()
// {
// 	char t[] = "hello";
// 	char p[] = "world";
// 	printf("%zu" , ft_strlcpy(t,p,4));
// }
