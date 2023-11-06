/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:27:59 by aubertra          #+#    #+#             */
/*   Updated: 2023/11/06 15:28:11 by aubertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	j;

	start = (size_t)start;
	i = start;
	j = 0;
	sub = ft_calloc((len - start + 1), sizeof(char));
	if (!sub)
		return (NULL);
	while (s[j] && j <= len)
	{	
		sub[j] = s[i];
		i++;
		j++;
	}
	sub[i] = '\0';
	return (sub);
}

/*
int	main(void)
{
	printf("%s\n", ft_substr("je*m*appelle*Enzo", 2, 8));
	return (0);
}
*/
