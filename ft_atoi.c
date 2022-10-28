/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutuil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 00:15:52 by mboutuil          #+#    #+#             */
/*   Updated: 2022/10/21 00:15:55 by mboutuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

// int ft_isdigit(int c )
// {
// 	if('0'<= c && '9'>= c)
// 		return 1;
// 	return 0;
// }
int ft_atoi(const char *str)
{
    int i = 0;
    int s = 1;
    int n = 0;
    while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i++;
    while((str[i] == '+' || str[i] == '-'))
    {
      if(str[i + 1] != '+' && str[i + 1] != '-')
      {
        if(str[i] == '-')
          s = s * -1;
      }
      else
         return 0;
        i++;  
    }    
    while(ft_isdigit(str[i]) == 1)
    {
        n = (n * 10) + (str[i] - '0');
        i++;
    }
    return (n * s);
}
// int main()
// {
//     char t[] = "9";
//     printf("%d",ft_atoi(t));
// }