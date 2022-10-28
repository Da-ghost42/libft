/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*      ft_strmapi.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutuil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 03:10:28 by mboutuil          #+#    #+#             */
/*   Updated: 2022/10/28 03:10:43 by mboutuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char* ft_strmapi(char const* s, char (*f)(unsigned int, char))
{
	size_t len;
	size_t i;
	char* str;

	i = 0;
	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (0);
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
// char f(unsigned int i, char c)
// {
// 	char str;
// 	str = c + 1;
// 	return (str);
// }

// int main()
// {
// 	char str1[] = "abc";
// 	char* str2;
// 	str2 = ft_strmapi(str1, *f);
// 	printf("%s\n", str2);
// }