/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragliga <ragliga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 14:01:29 by rgliga            #+#    #+#             */
/*   Updated: 2026/11/03 13:14:31 by ragliga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	ft_lstlast(*lst)->next = new;
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

// 	a = ft_lstnew("premier");
// 	b = ft_lstnew("deuxieme");
// 	c = ft_lstnew("troisieme");

// 	/* Test 1 : ajout dans une liste vide */
// 	printf("Test 1 : liste vide\n");
// 	ft_lstadd_back(&lst, a);
// 	print_list(lst);
// 	printf("size = %d (attendu 1)\n\n", ft_lstsize(lst));

// 	/* Test 2 : ajout en fin de liste */
// 	printf("Test 2 : ajout en fin\n");
// 	ft_lstadd_back(&lst, b);
// 	ft_lstadd_back(&lst, c);
// 	print_list(lst);
// 	printf("size = %d (attendu 3)\n", ft_lstsize(lst));
// 	printf("dernier = %s (attendu troisieme)\n\n",
// 		(char *)ft_lstlast(lst)->content);

// 	/* Test 3 : new == NULL (ne doit rien changer ni crasher) */
// 	printf("Test 3 : new == NULL\n");
// 	ft_lstadd_back(&lst, NULL);
// 	print_list(lst);
// 	printf("size = %d (attendu 3)\n\n", ft_lstsize(lst));

// 	/* Test 4 : lst == NULL (ne doit pas crasher) */
// 	printf("Test 4 : lst == NULL\n");
// 	ft_lstadd_back(NULL, ft_lstnew("x"));
// 	printf("OK, pas de crash\n");

// 	/* Free */
// 	while (lst)
// 	{
// 		t_list *tmp = lst->next;
// 		free(lst);
// 		lst = tmp;
// 	}
// 	return (0);
// }