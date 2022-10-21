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
	while(i < len && *str != '\0')
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return b;
}
// void	memset_main(void)
// {
// 	char a[20] = "Hello World!";
// 	char b[20] = "Hello World!";
	
// 	if ((strcmp(memset(a, '5', 6), ft_memset(b, '5', 6))) == 0)
// 	{
// 		if ((strcmp(memset(a, 'o', 15), ft_memset(b, 'o', 15))) == 0)
// 		{
// 			printf(KGRN "OKAY! =D\n" RESET);
// 			return;
// 		}
// 	}
// 	printf(KRED "FAILED!\n" RESET);
// }
