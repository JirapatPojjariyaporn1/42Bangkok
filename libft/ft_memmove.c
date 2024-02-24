/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 10:00:04 by marvin            #+#    #+#             */
/*   Updated: 2024/02/22 10:00:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *ft_memmove(void *dst, const void *src, size_t len) {
    char * d;
    char * s;
    
    d = (char *)dst;
    s = (char *)src;
    if (!dst && !src)
        return (NULL);
    if (s < d){
        while(len--){
            *(d + len) = *(s+len);
        }
        return dst;
    }
    else 
        while(len--){
            *d++ = *s++ ;
        }
        return dst;
    
}

// int main() {
//     char src[] = "Hello, World!";
//     char dst[20];


//     ft_memmove(dst, src, strlen(src) + 1); 
//     printf("Copied string: %s\n", dst);

//     return 0;
// }