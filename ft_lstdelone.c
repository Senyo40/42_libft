/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragliga <ragliga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 14:20:25 by rgliga            #+#    #+#             */
/*   Updated: 2026/11/03 13:15:33 by ragliga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}

// static int	g_del_count = 0;
// static char	*g_last_deleted = NULL;

// static void	del(void *content)
// {
// 	g_del_count++;
// 	g_last_deleted = (char *)content;
// 	free(content);
// }

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
// 	t_list	*a;
// 	t_list	*b;
// 	t_list	*c;
// 	char	*content_b;

// 	a = ft_lstnew(strdup("A"));
// 	content_b = strdup("B");
// 	b = ft_lstnew(content_b);
// 	c = ft_lstnew(strdup("C"));
// 	a->next = b;
// 	b->next = c;

// 	/* Test 1 : suppression d'un element isole */
// 	printf("Test 1 : delone d'un element seul\n");
// 	t_list	*solo = ft_lstnew(strdup("solo"));
// 	ft_lstdelone(solo, del);
// 	printf("del appele %d fois (attendu 1)\n\n", g_del_count);

// 	/* Test 2 : suppression du milieu, sans toucher aux autres */
// 	printf("Test 2 : delone de B (milieu)\n");
// 	g_del_count = 0;
// 	a->next = c;	/* on detache B avant de le supprimer */
// 	ft_lstdelone(b, del);
// 	printf("del appele %d fois (attendu 1)\n", g_del_count);
// 	printf("del a recu le contenu de B ? %s\n",
// 		g_last_deleted == content_b ? "OK" : "KO");
// 	printf("liste restante : ");
// 	print_list(a);
// 	printf("size = %d (attendu 2)\n", ft_lstsize(a));

// 	/* Free du reste */
// 	ft_lstclear(&a, del);
// 	return (0);
// }