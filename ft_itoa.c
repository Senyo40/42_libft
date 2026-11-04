/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragliga <ragliga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:10:55 by rgliga            #+#    #+#             */
/*   Updated: 2026/11/02 12:03:26 by ragliga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	intlen(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	if (n == 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	int		nlen;
	char	*temp;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	nlen = intlen(n);
	temp = malloc((nlen + 1) * sizeof(char));
	if (!temp)
		return (NULL);
	temp[0] = '0';
	if (n < 0)
	{
		temp[0] = '-';
		n = n * -1;
	}
	i = nlen - 1;
	while (n != 0)
	{
		temp[i] = ((n % 10) + 48);
		n = n / 10;
		i--;
	}
	temp[nlen] = '\0';
	return (temp);
}

// int	main(void)
// {
// 	int	n = -548946;
// 	printf("%s", ft_itoa(n));
// 	return (0);
// }
