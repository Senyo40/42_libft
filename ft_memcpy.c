/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragliga <ragliga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 12:40:06 by rgliga            #+#    #+#             */
/*   Updated: 2026/11/02 12:04:19 by ragliga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*psrc;
	unsigned char	*pdest;
	size_t			i;

	i = 0;
	psrc = (unsigned char *)src;
	pdest = (unsigned char *)dest;
	while (i < n)
	{
		pdest[i] = psrc[i];
		i++;
	}
	return (pdest);
}

// int	main()
// {
// 	char src[100] = "hello";
// 	char dest[100] = "";
// 	int size = 3;

// 	printf("--- avant ---\nsrc : %s\ndest : %s\n", src, dest);
// 	ft_memcpy(dest, src, size);
// 	printf("--- apres ---\nsrc : %s\ndest : %s", src, dest);
// 	return (0);
// }