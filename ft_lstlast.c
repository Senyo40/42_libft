/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragliga <ragliga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 13:26:15 by rgliga            #+#    #+#             */
/*   Updated: 2026/11/03 13:16:32 by ragliga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr;

	if (!lst)
		return (NULL);
	ptr = lst;
	while (ptr->next)
		ptr = ptr->next;
	return (ptr);
}

// int	main(void)
// {
// 	t_list	*a;
// 	t_list	*b;
// 	t_list	*c;
// 	t_list	*res;

// 	a = ft_lstnew("A");
// 	b = ft_lstnew("B");
// 	c = ft_lstnew("C");

// 	/* Test 1 : liste NULL */
// 	printf("Test 1 : lst == NULL\n");
// 	res = ft_lstlast(NULL);
// 	printf("resultat == NULL ? %s\n\n", res == NULL ? "OK" : "KO");

// 	/* Test 2 : un seul element */
// 	printf("Test 2 : un seul element\n");
// 	res = ft_lstlast(a);
// 	printf("resultat == a ? %s\n\n", res == a ? "OK" : "KO");

// 	/* Test 3 : plusieurs elements */
// 	printf("Test 3 : A -> B -> C\n");
// 	a->next = b;
// 	b->next = c;
// 	res = ft_lstlast(a);
// 	printf("resultat == c ? %s\n", res == c ? "OK" : "KO");
// 	printf("contenu = %s (attendu C)\n", (char *)res->content);
// 	printf("res->next == NULL ? %s\n\n", res->next == NULL ? "OK" : "KO");

// 	/* Test 4 : depuis le milieu de la liste */
// 	printf("Test 4 : depuis B\n");
// 	res = ft_lstlast(b);
// 	printf("resultat == c ? %s\n\n", res == c ? "OK" : "KO");

// 	/* Test 5 : la liste n'est pas modifiee */
// 	printf("Test 5 : liste intacte\n");
// 	printf("a->next == b ? %s\n", a->next == b ? "OK" : "KO");
// 	printf("b->next == c ? %s\n", b->next == c ? "OK" : "KO");

// 	free(a);
// 	free(b);
// 	free(c);
// 	return (0);
// }