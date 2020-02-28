/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhur <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 14:18:54 by jhur              #+#    #+#             */
/*   Updated: 2020/02/27 14:16:06 by jhur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *str, int ch)
{
    int i;

    i = ft_strlen(str);
    if(ch == '\0')
        return((char *)str + i);
    while(i > 0)
    {
        if(str[i] == ch)
            return((char *)&str[i]);
        else
            i--;
    }
    return(NULL);
}