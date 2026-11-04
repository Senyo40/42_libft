/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragliga <ragliga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:15:15 by rgliga            #+#    #+#             */
/*   Updated: 2026/11/02 12:05:34 by ragliga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		size;
	char	*newstr;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1);
	size = i + ft_strlen(s2) + 1;
	newstr = malloc(size * sizeof(char));
	if (!newstr)
		return (NULL);
	j = 0;
	ft_memcpy(newstr, s1, ft_strlen(s1));
	while (s2[j])
	{
		newstr[i] = s2[j];
		i++;
		j++;
	}
	newstr[i] = '\0';
	return (newstr);
}

// int main()
// {
//     char *s1 = "Hello ";
//     char *s2 = "World";
//     char *result = ft_strjoin(s1, s2);

// 	printf("S1 : %s\nS2 : %s\nStrjoin : %s",s1, s2, result);
// 	free(result);
// 	return (0);
// }