/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutuil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 21:26:27 by mboutuil          #+#    #+#             */
/*   Updated: 2022/10/16 21:44:05 by mboutuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    char *tmp = (char*)s;
    unsigned char l;

    l = (unsigned char)c;
    while ((tmp[0] != l && --n))
        tmp++;
    if (tmp[0] == l)
        return tmp;
    return (NULL);
}
// int main () {
//    const char str[] = "http://www.tutorialspoint.com";
//    const char c = '.';
//    char *ret;

//    ret = ft_memchr(str, c, strlen(str));

//    printf("String after |%c| is - |%s|\n", c, ret);

//    return(0);
// }