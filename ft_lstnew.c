/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragliga <ragliga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:00:15 by rgliga            #+#    #+#             */
/*   Updated: 2026/11/03 13:17:25 by ragliga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	struct s_list	*data;

	data = malloc(sizeof(struct s_list));
	if (!data)
		return (NULL);
	data->content = content;
	data->next = NULL;
	return (data);
}

// int	main(void)
// {
// 	t_list	*node;
// 	t_list	*node2;
// 	char	*str;
// 	int		nb;

// 	/* Test 1 : contenu = chaine litterale */
// 	printf("Test 1 : content = \"hello\"\n");
// 	node = ft_lstnew("hello");
// 	printf("node != NULL ? %s\n", node != NULL ? "OK" : "KO");
// 	printf("content = %s (attendu hello)\n", (char *)node->content);
// 	printf("next == NULL ? %s\n\n", node->next == NULL ? "OK" : "KO");
// 	free(node);

// 	/* Test 2 : le pointeur est stocke tel quel (pas de copie) */
// 	printf("Test 2 : pas de copie du contenu\n");
// 	str = strdup("alloue");
// 	node = ft_lstnew(str);
// 	printf("content == str ? %s\n\n", node->content == str ? "OK" : "KO");
// 	free(str);
// 	free(node);

// 	/* Test 3 : contenu = int */
// 	printf("Test 3 : content = &int\n");
// 	nb = 42;
// 	node = ft_lstnew(&nb);
// 	printf("*content = %d (attendu 42)\n", *(int *)node->content);
// 	printf("next == NULL ? %s\n\n", node->next == NULL ? "OK" : "KO");
// 	free(node);

// 	/* Test 4 : contenu = NULL (doit marcher) */
// 	printf("Test 4 : content = NULL\n");
// 	node = ft_lstnew(NULL);
// 	printf("node != NULL ? %s\n", node != NULL ? "OK" : "KO");
// 	printf("content == NULL ? %s\n", node->content == NULL ? "OK" : "KO");
// 	printf("next == NULL ? %s\n\n", node->next == NULL ? "OK" : "KO");
// 	free(node);

// 	/* Test 5 : deux noeuds distincts */
// 	printf("Test 5 : deux noeuds independants\n");
// 	node = ft_lstnew("A");
// 	node2 = ft_lstnew("B");
// 	printf("node != node2 ? %s\n", node != node2 ? "OK" : "KO");
// 	printf("node->next == NULL ? %s\n", node->next == NULL ? "OK" : "KO");
// 	printf("node2->next == NULL ? %s\n", node2->next == NULL ? "OK" : "KO");
// 	free(node);
// 	free(node2);

// 	return (0);
// }