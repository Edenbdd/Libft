/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:54:56 by aubertra          #+#    #+#             */
/*   Updated: 2023/11/06 15:36:43 by aubertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t		i;
	unsigned char	*ptr;

	i = 0;
	ptr = malloc(sizeof(size) * nmemb);
	if (!ptr)
		return (NULL);
	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

/*
int	main(void)
{
	printf("%s\n", (char *)ft_calloc(5, 4));
	printf("%s\n", (char *)calloc(5, 4));
	return (0);
}
*/
