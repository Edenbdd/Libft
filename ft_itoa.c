/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:57:45 by aubertra          #+#    #+#             */
/*   Updated: 2023/11/06 15:48:26 by aubertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_nblen(int n)
{
	int	nblen;

	nblen = 0;
	if (n < 0)
	{
		nblen++;
		n = -n;
	}
	if (n == 0)
		nblen++;
	while (n > 0)
	{	
		n /= 10;
		nblen++;
	}
	return (nblen);
}

char	*ft_itoa(int n)
{
	char	*str;
	int	len;

	len = ft_nblen(n);
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	str[len] = '\0';
	len--;
	if (n == 0)
		str[len] = '0';
	while (n > 0)
	{
		str[len] = n % 10 + 48;
		n /= 10;
		len --;
	}
	return (str);
}

int	main(void)
{
	printf("%s\n", ft_itoa(42));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(420));
	printf("%s\n", ft_itoa(-42));
	return (0);
}
