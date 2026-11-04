/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragliga <ragliga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 19:37:51 by rgliga            #+#    #+#             */
/*   Updated: 2026/11/03 13:14:49 by ragliga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// static void	print_list(t_list *lst)
// {
// 	while (lst)
// 	{
// 		printf("[%s]", (char *)lst->content);
// 		if (lst->next)
// 			printf(" -> ");
// 		lst = lst->next;
// 	}
// 	printf(" -> NULL\n");
// }

// int	main(void)
// {
// 	t_list	*lst = NULL;
// 	t_list	*a;
// 	t_list	*b;
// 	t_list	*c;

// 	a = ft_lstnew("A");
// 	b = ft_lstnew("B");
// 	c = ft_lstnew("C");

// 	/* Test 1 : ajout dans une liste vide */
// 	printf("Test 1 : liste vide\n");
// 	ft_lstadd_front(&lst, a);
// 	print_list(lst);
// 	printf("size = %d (attendu 1)\n", ft_lstsize(lst));
// 	printf("head == a ? %s\n\n", lst == a ? "OK" : "KO");

// 	/* Test 2 : ajout en tete, plusieurs fois */
// 	printf("Test 2 : ajout en tete\n");
// 	ft_lstadd_front(&lst, b);
// 	ft_lstadd_front(&lst, c);
// 	print_list(lst);
// 	printf("size = %d (attendu 3)\n", ft_lstsize(lst));
// 	printf("head == c ? %s\n", lst == c ? "OK" : "KO");
// 	printf("c->next == b ? %s\n", c->next == b ? "OK" : "KO");
// 	printf("b->next == a ? %s\n", b->next == a ? "OK" : "KO");
// 	printf("a->next == NULL ? %s\n", a->next == NULL ? "OK" : "KO");

// 	/* Free */
// 	while (lst)
// 	{
// 		t_list *tmp = lst->next;
// 		free(lst);
// 		lst = tmp;
// 	}
// 	return (0);
// }