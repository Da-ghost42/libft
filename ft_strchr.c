/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutuil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 21:18:03 by mboutuil          #+#    #+#             */
/*   Updated: 2022/10/15 23:00:54 by mboutuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char *ft_strchr(const char *s,int c)
{
	unsigned char p;
	p = (unsigned char)c;
	while(*s)
	{
		if (*s == p)
			return (char *)s;
		s++;
	}
	 if (p == '\0')
        return ((char *) s);
	return 0;
}
// int main ()
// {
// 		char *src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
// 		printf("%s",ft_strchr(src,'\0'));
// }
// //	const char t[] = "hello";
// //	printf("%s",ft_strchr(t,'e'));
// 	//printf("")
// /**/