/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:29:34 by aubertra          #+#    #+#             */
/*   Updated: 2023/11/06 15:29:38 by aubertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
/*
int	main(void)
{
	int	i = 97;
	int	j = 97;

	printf("%d\n", ft_toupper(146));
	printf("%d\n", toupper(146));
	return (0);
}
*/
