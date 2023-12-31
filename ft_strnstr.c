/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:21:09 by aubertra          #+#    #+#             */
/*   Updated: 2023/11/06 15:21:23 by aubertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *s, const char *find, size_t slen)
{
	long unsigned int	i;
	int	j;

	i = 0;
	if (find == NULL)
		return ((char *)s);
	while (s[i] && i < slen)
	{
		j = 0;
		while (s[i + j] && s[i + j] == find[j])
		{
			j++;
			if (find[j] == '\0')
				return ((char *)s + i);
		}
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	char	*s1 = "je suis Enzo suis";
	char	*s2 = "suis";

	printf("%s\n", ft_strnstr(s1, s2, 5));
	printf("%s\n", strnstr(s1, s2, 5));
	return (0);
}
*/
