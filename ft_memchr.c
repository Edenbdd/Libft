/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:04:39 by aubertra          #+#    #+#             */
/*   Updated: 2023/11/06 16:14:14 by aubertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	unsigned char	*s_bis;

	s_bis = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (s_bis[i] == (unsigned char)c)
			return ((void *)&s_bis[i]);
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	printf("%s\n", (char *)ft_memchr("salut a tous", 97, 6));
	printf("%s\n", (char *)memchr("salut a tous", 97, 6));
	return (0);
}
*/
