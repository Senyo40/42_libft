/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragliga <ragliga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 19:08:24 by rgliga            #+#    #+#             */
/*   Updated: 2026/11/02 12:12:57 by ragliga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	t_list	*ptr;
	int		size;

	size = 0;
	ptr = lst;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		size++;
	}
	return (size);
}

// #include <stdlib.h>
// int main() {
//     t_list *lst = ft_lstnew("1");
//     lst->next = ft_lstnew("2");
//     lst->next->next = ft_lstnew("3");

//     int size = ft_lstsize(lst);

//     if (size != 3) return 1;

//     free(lst->next->next);
//     free(lst->next);
//     free(lst);
//     return 0;
// }