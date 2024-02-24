/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 19:47:16 by marvin            #+#    #+#             */
/*   Updated: 2024/02/21 19:47:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{   
    size_t i;
    unsigned char *dest_pointer;
    const unsigned char *src_pointer;
    
    i = 0;
    dest_pointer = dest;
    src_pointer = src;
    if (!src && !dest){
        return (NULL);
    }
    if (dest != src){
        {
            while(i < n){
                dest_pointer[i] = src_pointer[i];
                i++;
            }
        }
    return (dest);
    }
}


// void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

// int main() {
//     char src[] = "Hello, world!";
//     char dest[20];

//     ft_memcpy(dest, src, sizeof(src));

//     printf("src string: %s\n", src);
//     printf("dest string: %s\n", dest);

//     return 0;
// }