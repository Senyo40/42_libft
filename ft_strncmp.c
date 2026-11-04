/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragliga <ragliga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:56:00 by rgliga            #+#    #+#             */
/*   Updated: 2026/11/02 12:18:41 by ragliga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*ps1;
	unsigned char	*ps2;

	i = 0;
	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	while (i < n)
	{
		if (ps1[i] != ps2[i] || ps1[i] == '\0')
			return (ps1[i] - ps2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char s1[] = "hello";
// 	char s2[] = "hello";
// 	int size = 10;

// 	int res = ft_strncmp(s1, s2, size);
// 		printf("%d", res);
// 	return (0);
// }