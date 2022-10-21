/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutuil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:36:48 by mboutuil          #+#    #+#             */
/*   Updated: 2022/10/16 15:13:13 by mboutuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

// size_t	 ft_strlen(const char *str)
// {
// 	int i;
// 	i = 0;
// 	while(str[i])
// 		i++;
// 	return i;
// }
char *ft_strrchr(const char *s , int c)
{
	char p;
    size_t i;
	p = (unsigned char)c;
	i = ft_strlen(s);

	while(s[--i])
	{
		if(s[i] == p)
			return (char *)s + i;
	}
	return NULL;
}
// int main ()
// {
// 	const char t[] = "hello";
// 	printf("%s",ft_strrchr(t,'e'));
// 	//printf("")
// }

