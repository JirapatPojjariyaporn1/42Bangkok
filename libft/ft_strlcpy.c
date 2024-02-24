/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 10:56:19 by marvin            #+#    #+#             */
/*   Updated: 2024/02/22 10:56:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (src [i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (i);
}


// int main() {
//     char src[] = "Hello, World!";
//     char dst[20];

//     size_t length = ft_strlcpy(dst, src, sizeof(dst));

//     printf("Copied string: %s\n", dst);
//     printf("Length of copied string: %zu\n", length);

//     return 0;
// }

