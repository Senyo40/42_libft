/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragliga <ragliga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 12:50:35 by rgliga            #+#    #+#             */
/*   Updated: 2026/11/02 12:06:09 by ragliga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*res;

	i = 0;
	res = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
			res = (char *)&s[i];
		i++;
	}
	if (s[i] == (char)c)
		res = (char *)&s[i];
	return (res);
}

// int main()
// {
// 	char str[50] = "strchr avec 2 r";
// 	char c = 'c';
// 	printf("%s", ft_strrchr(str, c));
// 	return (0);
// }