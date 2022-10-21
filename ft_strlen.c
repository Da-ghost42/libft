/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutuil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 21:50:49 by mboutuil          #+#    #+#             */
/*   Updated: 2022/10/13 21:37:56 by mboutuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

size_t	 ft_strlen(const char *str)
{
	int i;
	i = 0;
	while(str[i])
		i++;
	return i;
}

// int main()	
// {
// 	int i;
// 	char str[] = "123564878";
// 	printf("%zu",ft_strlen(str));
// }
