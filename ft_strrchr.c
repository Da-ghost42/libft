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


char *ft_strrchr(const char *s , int c)
{
    int i;
	i = ft_strlen(s);
	
	while(s[i] != (char)c && i >= 0)
		i--;
	if(i < 0)
		return NULL;
	else
		return (char *)s + i;
}

// int main ()
// {
// 	const char t[] = "hello";
// 	printf("%s",ft_strrchr(t,'e'));
// 	//printf("")
// }

