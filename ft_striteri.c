/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:17:01 by aubertra          #+#    #+#             */
/*   Updated: 2023/11/06 15:17:15 by aubertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, s);
		i++;
	}	
}


void	maj(unsigned int i, char *str)
{
	str[i] ++;
}

/*
int	main(void)
{
	void	(*ptrf)(unsigned int, char *);
	char	string1[] = "je m'appelle Enzo";

	ptrf = maj;
	ft_striteri(string1, ptrf);
	printf("%s\n", string1);
	return (0);
}
*/
