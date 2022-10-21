/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutuil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 04:06:02 by mboutuil          #+#    #+#             */
/*   Updated: 2022/10/21 04:06:58 by mboutuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

// void *ft_memset(void *b,int c,size_t len)
// {
// 	size_t i;
// 	unsigned char *str ;
// 	str = (unsigned char *)b;
// 	i = 0;
// 	while(i < len && *str != '\0')
// 	{
// 		str[i] = (unsigned char)c;
// 		i++;
// 	}
// 	return b;
// }
void *ft_calloc(size_t count,size_t size)
{
    void *s;

    s = malloc(count * size);
    if(s == NULL)
        return s;
    ft_memset(s,'0',size * count);
return (s);
}
// int main()
// {
//     char *ptr;
//     size_t length;

  
//     length = 50;

//     ptr = (char *)ft_calloc(length, sizeof(char));
//     if (ptr == NULL)
//     {
//         printf("Could not allocate required memory\n");
//         exit(1);
//     }
//     strcpy(ptr, "C calloc at TechOnTheNet.com");
//     printf("%s\n", ptr);
//     free(ptr);

//     return 0;
// }
