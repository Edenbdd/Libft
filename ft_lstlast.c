/*42 header*/

#include"libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list *ptr = NULL;
	ptr = lst;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	return (ptr);
}

int	main(void)
{
	t_list *head = malloc(sizeof(t_list));
	if (!head)
		return(1);
	head->content = (void *)5;
	head->next = NULL;
	t_list *head_1 = malloc(sizeof(t_list));
	if (!head_1)
		return(1);
	head_1->content = (void *)6;
	head_1->next = NULL;
	t_list *head_2 = malloc(sizeof(t_list));
	if (!head_2)
		return(1);
	head_2->content = (void *)7;
	head_2->next = NULL;
	head->next = head_1;
	head_1->next = head_2;
	printf("%p\n", ft_lstlast(head_1->next));
	printf("%p\n", ft_lstlast(head));
	return (0);
}
