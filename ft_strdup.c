/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutuil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:39:02 by mboutuil          #+#    #+#             */
/*   Updated: 2022/10/21 16:39:14 by mboutuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char *ft_strdup(const char *s)
{
    char    *q;
    size_t  n;

    n = 0;
    q = (char *)malloc(ft_strlen(s) * sizeof(char));
    if (!q)
        return NULL;
    while (s[n])
	{
		q[n] = s[n];
		n++;
	}
	q[n] = '\0';
    return q;
}
