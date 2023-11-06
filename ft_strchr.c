/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:14:45 by aubertra          #+#    #+#             */
/*   Updated: 2023/11/06 15:16:18 by aubertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int	len;
	int	i;

	i = 0;
	len = ft_strlen((char *)s) + 1;
	while (i < len)
	{
		if (s[i] == c)
		       return ((char *)s + i);
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	char	*s1 = "je m'appelle Enzo";

	printf("%s\n", ft_strchr(s1, 128));
	printf("%s\n", strchr(s1, 128));
	return (0);
}
*/
