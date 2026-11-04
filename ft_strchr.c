/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragliga <ragliga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 12:32:17 by rgliga            #+#    #+#             */
/*   Updated: 2026/11/02 12:24:34 by ragliga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	int				slen;
	unsigned char	*sptr;
	unsigned char	cptr;

	i = 0;
	sptr = (unsigned char *)s;
	cptr = (unsigned char)c;
	slen = ft_strlen(s);
	while (i < slen)
	{
		if (sptr[i] == cptr)
			return ((char *)&s[i]);
		i++;
	}
	if (sptr[i] == cptr)
		return ((char *)&s[i]);
	return (NULL);
}

// int main()
// {
// 	char str[50] = "Chaicne de caracteres lol";
// 	char c = 'c';
// 	printf("%s", ft_strchr(str, c));
// 	return (0);
// }