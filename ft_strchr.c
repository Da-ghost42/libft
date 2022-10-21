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
	char p;
	p = (unsigned char)c;
	while(*s)
	{
		if (*s == p)
			return (char *)s;
		s++;
	}
		return NULL;
}
// int main ()
//{
//	const char t[] = "hello";
//	printf("%s",ft_strchr(t,'e'));
	//printf("")
/**/