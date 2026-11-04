/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragliga <ragliga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 13:06:09 by rgliga            #+#    #+#             */
/*   Updated: 2026/11/02 12:04:09 by ragliga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*sptr;
	unsigned char	cc;
	size_t			i;

	if (!n)
		return (NULL);
	i = 0;
	sptr = (unsigned char *)s;
	cc = (unsigned char)c;
	while (i < n)
	{
		if (sptr[i] == cc)
			return ((void *)&sptr[i]);
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	char data[] = {-1, -128, 127, 0};
// 	char *result1 = memchr(data, -1, 4);
// 	printf("%s", result1);
// 	return (0);
// }