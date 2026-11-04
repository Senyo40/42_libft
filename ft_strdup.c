/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragliga <ragliga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 08:56:29 by rgliga            #+#    #+#             */
/*   Updated: 2026/11/02 12:16:30 by ragliga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*nstr;

	i = 0;
	nstr = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!nstr)
		return (NULL);
	while (src[i] != '\0')
	{
		nstr[i] = src[i];
		i++;
	}
	nstr[i] = '\0';
	return (nstr);
}

// int main()
// {
// 	char *str = "hallo";

// 	char *nstr = ft_strdup(str);
// 	printf("%s", nstr);
// 	free(nstr);
// 	return 0;
// }