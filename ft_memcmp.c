/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutuil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:18:26 by mboutuil          #+#    #+#             */
/*   Updated: 2022/10/19 15:18:29 by mboutuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int     ft_memcmp(void const *s1, void const *s2, size_t const n)
{
    size_t i;

    i = 0;
    while (i < n )
    {
        if((((unsigned char *)s1)[i] != ((unsigned char *)s2)[i]))
             return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
         i++;
    }
    return (0);
}
// int main ()
// {
//     unsigned char s[] = "hello\0heloo";
//     unsigned char s1[] = "hellooo";
//     // printf("%d\n", ft_memcmp(s, s1, 9));
//     printf("%d\n", memcmp(s, s1, 9));
// }