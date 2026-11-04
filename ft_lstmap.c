/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragliga <ragliga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:04:19 by rgliga            #+#    #+#             */
/*   Updated: 2026/11/03 13:17:03 by ragliga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*temp;
	t_list	*new;
	t_list	*newlist;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	newlist = NULL;
	while (lst)
	{
		temp = f(lst->content);
		new = ft_lstnew(temp);
		if (!new)
		{
			del(temp);
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, new);
		lst = lst->next;
	}
	return (newlist);
}

// static int	g_del_count = 0;

// static void	*dup_upper(void *content)
// {
// 	char	*s;
// 	int		i;

// 	s = strdup((char *)content);
// 	if (!s)
// 		return (NULL);
// 	i = 0;
// 	while (s[i])
// 	{
// 		s[i] = toupper(s[i]);
// 		i++;
// 	}
// 	return (s);
// }

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
// 	t_list	*res;

// 	ft_lstadd_back(&lst, ft_lstnew(strdup("abc")));
// 	ft_lstadd_back(&lst, ft_lstnew(strdup("def")));
// 	ft_lstadd_back(&lst, ft_lstnew(strdup("ghi")));

// 	/* Test 1 : map classique */
// 	printf("Test 1 : map en majuscules\n");
// 	res = ft_lstmap(lst, dup_upper, del);
// 	printf("origine : ");
// 	print_list(lst);
// 	printf("resultat : ");
// 	print_list(res);
// 	printf("size = %d (attendu 3)\n", ft_lstsize(res));
// 	printf("res != lst ? %s\n", res != lst ? "OK" : "KO");
// 	printf("contenus differents (alloc) ? %s\n",
// 		res->content != lst->content ? "OK" : "KO");
// 	printf("del appele %d fois (attendu 0)\n\n", g_del_count);

// 	/* Test 2 : lst == NULL */
// 	printf("Test 2 : lst == NULL\n");
// 	printf("resultat == NULL ? %s\n\n",
// 		ft_lstmap(NULL, dup_upper, del) == NULL ? "OK" : "KO");

// 	/* Test 3 : f == NULL ou del == NULL */
// 	printf("Test 3 : f == NULL / del == NULL\n");
// 	printf("f NULL   -> NULL ? %s\n",
// 		ft_lstmap(lst, NULL, del) == NULL ? "OK" : "KO");
// 	printf("del NULL -> NULL ? %s\n\n",
// 		ft_lstmap(lst, dup_upper, NULL) == NULL ? "OK" : "KO");

// 	/* Test 4 : free des deux listes */
// 	printf("Test 4 : clear des deux listes\n");
// 	g_del_count = 0;
// 	ft_lstclear(&res, del);
// 	ft_lstclear(&lst, del);
// 	printf("del appele %d fois (attendu 6)\n", g_del_count);

// 	return (0);
// }