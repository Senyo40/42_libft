/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragliga <ragliga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:52:46 by rgliga            #+#    #+#             */
/*   Updated: 2026/11/03 13:19:07 by ragliga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	if (s && f)
	{
		i = 0;
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}

// static int	g_count = 0;
// static char	g_indices[16] = "";

// static void	upper_even(unsigned int i, char *c)
// {
// 	if (i % 2 == 0)
// 		*c = toupper(*c);
// }

// static void	record(unsigned int i, char *c)
// {
// 	(void)c;
// 	g_indices[i] = '0' + i;
// 	g_count++;
// 	g_indices[g_count] = '\0';
// }

// static void	add_index(unsigned int i, char *c)
// {
// 	*c = *c + i;
// }

// int	main(void)
// {
// 	char	s1[] = "abcdef";
// 	char	s2[] = "abcde";
// 	char	s3[] = "";
// 	char	s4[] = "aaaa";
// 	char	s5[] = "xyz";

// 	/* Test 1 : modification selon l'index */
// 	printf("Test 1 : majuscule sur les index pairs\n");
// 	ft_striteri(s1, upper_even);
// 	printf("resultat = %s (attendu AbCdEf)\n\n", s1);

// 	/* Test 2 : nombre d'appels et index passes */
// 	printf("Test 2 : index et nombre d'appels\n");
// 	g_count = 0;
// 	ft_striteri(s2, record);
// 	printf("appels = %d (attendu 5)\n", g_count);
// 	printf("index = %s (attendu 01234)\n\n", g_indices);

// 	/* Test 3 : chaine vide */
// 	printf("Test 3 : chaine vide\n");
// 	g_count = 0;
// 	ft_striteri(s3, record);
// 	printf("appels = %d (attendu 0)\n\n", g_count);

// 	/* Test 4 : f recoit bien l'adresse du caractere */
// 	printf("Test 4 : modification via le pointeur\n");
// 	ft_striteri(s4, add_index);
// 	printf("resultat = %s (attendu abcd)\n\n", s4);

// 	/* Test 5 : s == NULL ou f == NULL (ne doit pas crasher) */
// 	printf("Test 5 : pointeurs NULL\n");
// 	g_count = 0;
// 	ft_striteri(NULL, record);
// 	ft_striteri(s5, NULL);
// 	printf("appels = %d (attendu 0)\n", g_count);
// 	printf("s5 inchange = %s (attendu xyz)\n", s5);
// 	printf("OK, pas de crash\n");

// 	return (0);
// }