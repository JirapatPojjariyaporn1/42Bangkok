/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 13:09:20 by marvin            #+#    #+#             */
/*   Updated: 2024/02/22 13:09:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}


// int main() {
//     char str[] = "Hello, world!";
//     char *ptr;
 
//     ptr = strrchr(str, 'o');

//     if (ptr != NULL) {
//         printf("Found @: %ld\n", ptr - str);
//     } else {
//         printf("Not Found","\n");
//     }
//     return 0;
// }