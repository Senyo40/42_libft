/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragliga <ragliga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:56:24 by rgliga            #+#    #+#             */
/*   Updated: 2026/11/02 12:06:18 by ragliga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub_string;
	unsigned int	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		sub_string = malloc(sizeof(char) * (1));
		if (!sub_string)
			return (NULL);
		return (sub_string[0] = '\0', sub_string);
	}
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	i = 0;
	sub_string = malloc(sizeof(char) * (len + 1));
	if (!sub_string)
		return (NULL);
	while (i < len && s[start + i])
	{
		sub_string[i] = s[start + i];
		i++;
	}
	sub_string[i] = '\0';
	return (sub_string);
}
// int main()
// { 
//     printf("%s",ft_substr("Bonjour comment ca va?", 5, 10));
// }