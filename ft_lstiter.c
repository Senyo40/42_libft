/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragliga <ragliga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 14:57:05 by rgliga            #+#    #+#             */
/*   Updated: 2026/11/03 13:16:08 by ragliga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*ptr;

	ptr = lst;
	while (ptr != NULL)
	{
		f(ptr->content);
		ptr = ptr->next;
	}
}

// static int	g_count = 0;
// static char	g_order[16] = "";

// static void	to_upper(void *content)
// {
// 	char	*s;

// 	s = (char *)content;
// 	while (*s)
// 	{
// 		*s = toupper(*s);
// 		s++;
// 	}
// }

// static void	count_and_record(void *content)
// {
// 	g_order[g_count] = ((char *)content)[0];
// 	g_count++;
// 	g_order[g_count] = '\0';
// }

// static void	del(void *content)
// {
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

// 	ft_lstadd_back(&lst, ft_lstnew(strdup("abc")));
// 	ft_lstadd_back(&lst, ft_lstnew(strdup("def")));
// 	ft_lstadd_back(&lst, ft_lstnew(strdup("ghi")));

// 	/* Test 1 : modification du contenu */
// 	printf("Test 1 : passage en majuscules\n");
// 	printf("avant : ");
// 	print_list(lst);
// 	ft_lstiter(lst, to_upper);
// 	printf("apres : ");
// 	print_list(lst);
// 	printf("\n");

// 	/* Test 2 : nombre d'appels et ordre */
// 	printf("Test 2 : nombre d'appels et ordre\n");
// 	ft_lstiter(lst, count_and_record);
// 	printf("appels = %d (attendu 3)\n", g_count);
// 	printf("ordre = %s (attendu DGG)\n\n", g_order);

// 	/* Test 3 : liste NULL (ne doit pas crasher) */
// 	printf("Test 3 : lst == NULL\n");
// 	g_count = 0;
// 	ft_lstiter(NULL, count_and_record);
// 	printf("appels = %d (attendu 0)\n", g_count);
// 	printf("OK, pas de crash\n");

// 	ft_lstclear(&lst, del);
// 	return (0);
// }