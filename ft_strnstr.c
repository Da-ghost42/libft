/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutuil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:32:56 by mboutuil          #+#    #+#             */
/*   Updated: 2022/10/20 18:33:14 by mboutuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"libft.h"

size_t	 ft_strlen(const char *str)
{
	int i;
	i = 0;
	while(str[i])
		i++;
	return i;
}
 char *ft_strnstr(const char *haystack, const char *needle, size_t len)
 {
    size_t i;
    size_t j;

    i = 0;
    if(ft_strlen(needle) == 0)
        return ((char *)haystack);
    while(haystack[i] && i < len)
    {
        j = 0;
        while(needle[j] && haystack[i + j] == needle[j])
        {
         
            if(needle[j + 1] == '\0')
                return ((char *) haystack + i);
            j++;
        }
        i++;
    }
    return 0;
 }
 int main()
 {
    char *p = "oooooolala";
    char *q = "la";
    printf("%s",ft_strnstr(p,q,9));
 }