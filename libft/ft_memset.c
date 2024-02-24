/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:16:00 by marvin            #+#    #+#             */
/*   Updated: 2024/02/21 15:16:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void    *ft_memset(void *s, char c, size_t n)
{
    size_t  i;
    char    *str;

    i = 0;
    str = (char *)s;
    while (i < n)
    {
        str[i] = c;
        i++;
    }
    return (s);
}