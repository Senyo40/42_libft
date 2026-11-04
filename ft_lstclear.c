/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragliga <ragliga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 14:25:53 by rgliga            #+#    #+#             */
/*   Updated: 2026/11/03 13:15:09 by ragliga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}

// static int	g_del_count = 0;

// static void	del(void *content)
// {
// 	g_del_count++;
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
// 	t_list	*lst = NULL;

// 	/* Test 1 : liste de 3 elements */
// 	printf("Test 1 : clear d'une liste de 3\n");
// 	ft_lstadd_back(&lst, ft_lstnew(strdup("A")));
// 	ft_lstadd_back(&lst, ft_lstnew(strdup("B")));
// 	ft_lstadd_back(&lst, ft_lstnew(strdup("C")));
// 	print_list(lst);
// 	ft_lstclear(&lst, del);
// 	printf("lst == NULL ? %s\n", lst == NULL ? "OK" : "KO");
// 	printf("del appele %d fois (attendu 3)\n\n", g_del_count);

// 	/* Test 2 : liste d'un seul element */
// 	printf("Test 2 : clear d'une liste de 1\n");
// 	g_del_count = 0;
// 	ft_lstadd_back(&lst, ft_lstnew(strdup("seul")));
// 	ft_lstclear(&lst, del);
// 	printf("lst == NULL ? %s\n", lst == NULL ? "OK" : "KO");
// 	printf("del appele %d fois (attendu 1)\n\n", g_del_count);

// 	/* Test 3 : liste deja vide (*lst == NULL) */
// 	printf("Test 3 : liste deja vide\n");
// 	g_del_count = 0;
// 	ft_lstclear(&lst, del);
// 	printf("lst == NULL ? %s\n", lst == NULL ? "OK" : "KO");
// 	printf("del appele %d fois (attendu 0)\n\n", g_del_count);

// 	/* Test 4 : lst == NULL et del == NULL (ne doit pas crasher) */
// 	printf("Test 4 : pointeurs NULL\n");
// 	ft_lstclear(NULL, del);
// 	ft_lstclear(&lst, NULL);
// 	printf("OK, pas de crash\n");

// 	return (0);
// }