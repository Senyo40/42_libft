/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragliga <ragliga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:24:39 by rgliga            #+#    #+#             */
/*   Updated: 2026/11/03 13:19:39 by ragliga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			slen;
	char			*newstr;

	if (!s || !f)
		return (NULL);
	i = 0;
	slen = ft_strlen(s);
	newstr = malloc(sizeof(char) * (slen + 1));
	if (!newstr)
		return (NULL);
	while (s[i])
	{
		newstr[i] = f(i, s[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}

// static int	g_count = 0;
// static char	g_indices[16] = "";

// static char	upper_even(unsigned int i, char c)
// {
// 	if (i % 2 == 0)
// 		return (toupper(c));
// 	return (c);
// }

// static char	add_index(unsigned int i, char c)
// {
// 	return (c + i);
// }

// static char	record(unsigned int i, char c)
// {
// 	g_indices[g_count] = '0' + i;
// 	g_count++;
// 	g_indices[g_count] = '\0';
// 	return (c);
// }

// int	main(void)
// {
// 	char	s[] = "aaaa";
// 	char	*res;

// 	/* Test 1 : modification selon l'index */
// 	printf("Test 1 : majuscule sur les index pairs\n");
// 	res = ft_strmapi("abcdef", upper_even);
// 	printf("resultat = %s (attendu AbCdEf)\n\n", res);
// 	free(res);

// 	/* Test 2 : nombre d'appels et index passes */
// 	printf("Test 2 : index et nombre d'appels\n");
// 	g_count = 0;
// 	res = ft_strmapi("abcde", record);
// 	printf("appels = %d (attendu 5)\n", g_count);
// 	printf("index = %s (attendu 01234)\n", g_indices);
// 	printf("resultat = %s (attendu abcde)\n\n", res);
// 	free(res);

// 	/* Test 3 : chaine vide */
// 	printf("Test 3 : chaine vide\n");
// 	g_count = 0;
// 	res = ft_strmapi("", record);
// 	printf("res != NULL ? %s\n", res != NULL ? "OK" : "KO");
// 	printf("res[0] == '\\0' ? %s\n", (res && res[0] == '\0') ? "OK" : "KO");
// 	printf("appels = %d (attendu 0)\n\n", g_count);
// 	free(res);

// 	/* Test 4 : nouvelle chaine, origine intacte */
// 	printf("Test 4 : origine non modifiee\n");
// 	res = ft_strmapi(s, add_index);
// 	printf("resultat = %s (attendu abcd)\n", res);
// 	printf("origine = %s (attendu aaaa)\n", s);
// 	printf("res != s ? %s\n\n", res != s ? "OK" : "KO");
// 	free(res);

// 	/* Test 5 : pointeurs NULL */
// 	printf("Test 5 : pointeurs NULL\n");
// 	printf("s == NULL -> NULL ? %s\n",
// 		ft_strmapi(NULL, upper_even) == NULL ? "OK" : "KO");
// 	printf("f == NULL -> NULL ? %s\n",
// 		ft_strmapi("abc", NULL) == NULL ? "OK" : "KO");

// 	return (0);
// }