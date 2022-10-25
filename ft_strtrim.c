/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutuil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 01:45:40 by mboutuil          #+#    #+#             */
/*   Updated: 2022/10/24 01:45:54 by mboutuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char *ft_strtrim(const char *s1,const char *set)
{
   int start;
   int end;
   
   start = -1;
   if (!s1 || !set)
      return 0;
   
   while(s1[++start])
      if(!ft_strchr(set,s1[start]))
         break ;
   end = ft_strlen(s1) + 1;
   while(--end)
      if(!ft_strchr(set,s1[end - 1]))
         break ;
   return (ft_substr((char *)s1,start,(end - start)));
}
// int main()
// {
//    char t[] = "abababattttaaaaa";
//    printf("%s",ft_strtrim(t,"ab"));
// }
