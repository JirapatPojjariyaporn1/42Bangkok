/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpojjari <cpojjari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 14:03:53 by marvin            #+#    #+#             */
/*   Updated: 2024/02/25 01:26:15 by cpojjari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while ((char)c != *s)
	{
		if (!*s)
			return (0);
		s++;
	}
	return ((char *)s);
}

// int	main(void)
// {
// 	char *str = "Hello, world!";
// 	char *ptr;

// 	ptr = ft_strchr(str, 'o');

// 	if (ptr != NULL)
// 		printf("Found at: %ld\n", ptr - str);
// 	else
// 		printf("Not found\n");

// 	return (0);
// }
