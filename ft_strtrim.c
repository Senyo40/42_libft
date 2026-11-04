/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragliga <ragliga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:23:58 by ragliga           #+#    #+#             */
/*   Updated: 2026/11/04 11:18:08 by ragliga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*trimedstr(const char *s1, size_t start, size_t end)
{
	char		*substr;
	int			i;

	if (start - end == 0 || start >= ft_strlen(s1))
		return (ft_strdup(""));
	substr = (char *)ft_calloc(end - start + 1, sizeof(char));
	if (!substr)
		return (NULL);
	i = 0;
	while (start < end)
	{
		substr[i] = s1[start];
		start++;
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

static int	strccmp(char c, char *str)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(str))
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t		i;
	size_t		start;
	size_t		s1len;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	start = 0;
	s1len = ft_strlen(s1);
	while (strccmp(s1[i], (char *)set))
		i++;
	start = i;
	while (s1len > start && strccmp(s1[s1len - 1], (char *)set))
		s1len--;
	return (trimedstr(s1, start, s1len));
}

// int main()
// {
// 	char str[] = "ababaaaMy name is Simonbbaaabba";
// 	char set[] = "ab";
// 	// printf("salut");
// 	char *res =  ft_strtrim(str,set);
// 	printf("%s\n",res);
// }