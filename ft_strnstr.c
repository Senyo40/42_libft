/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragliga <ragliga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 13:32:49 by rgliga            #+#    #+#             */
/*   Updated: 2026/11/02 13:18:00 by ragliga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[0] == 0)
		return ((char *)big);
	while (i < len && big[i])
	{
		while ((i + j < len) && big[i + j] == little[j] && big[i + j])
		{
			j++;
			if (little[j] == 0)
				return ((char *)big + i);
		}
		j = 0;
		i++;
	}
	return (0);
}

// int main()
// {
// 	const char *big = "Foo Bar Baz Mar Sar Kar";
// 	const char *little = "Sar";
// 	size_t len = 12;
// 	printf("%s", ft_strnstr(big, little, len));
// 	return (0);
// }