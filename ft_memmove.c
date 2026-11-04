/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragliga <ragliga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 13:02:31 by rgliga            #+#    #+#             */
/*   Updated: 2026/11/02 12:04:21 by ragliga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*pdst;
	char	*psrc;
	size_t	i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	pdst = (char *)dest;
	psrc = (char *)src;
	if (pdst < psrc)
	{
		while (n--)
			*pdst++ = *psrc++;
	}
	else if (pdst > psrc)
	{
		while (n--)
			pdst[n] = psrc[n];
	}
	return (dest);
}

// int	main(int ac, char **av)
// {
// 	if (ac == 3)
// 	{
// 		printf("--- avant ---\nsrc : %s\ndst : %s\n", av[2], av[1]);
// 		ft_memmove(av[1], av[2], 3);
// 		printf("--- apres ---\nsrc : %s\ndst : %s", av[2], av[1]);
// 	}
// 	return (0);
// }