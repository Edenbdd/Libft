/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:01:56 by aubertra          #+#    #+#             */
/*   Updated: 2023/11/06 16:06:04 by aubertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = malloc(sizeof(t_list) * 1);
	if (!head)
		return (NULL);
	head->content = content;
	head->next = NULL;
	return (head);
}
/*
int     main(void)
{
	int	*ptr = malloc(sizeof(int));

	*ptr = 4;
	t_list *head = ft_lstnew((void *)ptr);
	printf("%d\n", *(int *)head->content);
	printf("%p\n", head->next);
        return (0);
}
*/
