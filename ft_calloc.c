/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragliga <ragliga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 13:58:39 by rgliga            #+#    #+#             */
/*   Updated: 2026/11/03 09:51:43 by ragliga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	unsigned char	*temp;

	if (size != 0 && nmemb > __SIZE_MAX__ / size)
		return (NULL);
	i = 0;
	temp = malloc(nmemb * size);
	if (!temp)
		return (NULL);
	while (i < nmemb * size)
	{
		temp[i] = 0;
		i++;
	}
	return (temp);
}

// int main()
// {
// 	char *testCalloc = ft_calloc(5,5);
// 	testCalloc[0] = 'a';
// 	testCalloc[2] = 6;
// 	printf("%c", testCalloc[0]);
// 	printf("%d", testCalloc[1]);
// 	printf("%d", testCalloc[2]);
// 	free(testCalloc);
// 	return (0);
// }