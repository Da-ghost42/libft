/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutuil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 23:29:11 by mboutuil          #+#    #+#             */
/*   Updated: 2022/10/22 23:29:18 by mboutuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
char	*ft_strcat(char *s1, const char *s2)
{
	int len;
	int i;

	len = ft_strlen(s1);
	i = 0;
	while (s2[i])
		s1[len++] = ((char *)s2)[i++];
	s1[len] = '\0';
	return s1;
}
char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char *ft_strjoin(char const *s1, char const *s2)
{
    char *p;
    int len_s1;
    int len_s2;

    len_s1 = ft_strlen(s1);
    len_s2 = ft_strlen(s2);

    p = (char *)malloc(len_s1 + len_s2 + 1);
	if (!p)
        return NULL;
	ft_strcpy(p,(char *)s1);
    ft_strcat(p,s2);

    return p;
}
// int main()
// {
//     char *t ="hello";
//     char *s = "";
//     printf("%s",ft_strjoin(t,s)); 
// }

    
