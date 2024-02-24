/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:18:54 by marvin            #+#    #+#             */
/*   Updated: 2024/02/22 15:18:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		++s;
	}
	return (0);
}

// int main() {
//     const char str[] = "Hello, world!";
//     const char *ptr;

//     ptr = ft_memchr(str, 'o', strlen(str));

//     if (ptr != NULL) {
//         printf("Found character 'o' at position: %ld\n", ptr - str);
//     } else {
//         printf("Character 'o' not found in the string.\n");
//     }

//     return 0;
// }
