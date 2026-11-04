/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragliga <ragliga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 08:59:14 by rgliga            #+#    #+#             */
/*   Updated: 2026/11/03 13:17:54 by ragliga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// static int	check(const char *name, void *a, void *b, size_t n)
// {
// 	int	ok;

// 	ok = (memcmp(a, b, n) == 0);
// 	printf("%s : %s\n", name, ok ? "OK" : "KO");
// 	return (ok);
// }

// int	main(void)
// {
// 	char	a[20];
// 	char	b[20];
// 	void	*ret;
// 	int		arr_a[5];
// 	int		arr_b[5];

// 	/* Test 1 : cas classique */
// 	memset(a, 'x', 20);
// 	memset(b, 'x', 20);
// 	ft_memset(a, 'A', 10);
// 	memset(b, 'A', 10);
// 	check("Test 1 : remplissage partiel", a, b, 20);

// 	/* Test 2 : n == 0 (rien ne change) */
// 	ft_memset(a, 'Z', 0);
// 	memset(b, 'Z', 0);
// 	check("Test 2 : n == 0", a, b, 20);

// 	/* Test 3 : remplissage a zero */
// 	ft_memset(a, 0, 20);
// 	memset(b, 0, 20);
// 	check("Test 3 : remplissage a 0", a, b, 20);

// 	/* Test 4 : valeur de c > 255 (cast en unsigned char) */
// 	ft_memset(a, 321, 20);	/* 321 % 256 = 65 = 'A' */
// 	memset(b, 321, 20);
// 	check("Test 4 : c = 321", a, b, 20);

// 	/* Test 5 : valeur negative */
// 	ft_memset(a, -1, 20);
// 	memset(b, -1, 20);
// 	check("Test 5 : c = -1", a, b, 20);

// 	/* Test 6 : valeur de retour */
// 	ret = ft_memset(a, 'k', 5);
// 	printf("Test 6 : retour == s ? %s\n", ret == a ? "OK" : "KO");

// 	/* Test 7 : sur un tableau d'int */
// 	memset(arr_a, 1, sizeof(arr_a));
// 	memset(arr_b, 1, sizeof(arr_b));
// 	ft_memset(arr_a, 0, sizeof(arr_a));
// 	memset(arr_b, 0, sizeof(arr_b));
// 	check("Test 7 : tableau d'int", arr_a, arr_b, sizeof(arr_a));

// 	/* Test 8 : le reste du buffer n'est pas touche */
// 	memset(a, 'x', 20);
// 	ft_memset(a, 'A', 5);
// 	printf("Test 8 : a[4] = %c (attendu A), a[5] = %c (attendu x)\n",
// 		a[4], a[5]);

// 	return (0);
// }