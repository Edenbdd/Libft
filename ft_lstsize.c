/*42 header*/

#include"libft.h"

t_list  *ft_lstnew(void *content)
{
        t_list *head;

        head = malloc(sizeof(t_list) * 1);
	if (!head)
		return (NULL);
        head->content = content;
	head->next = NULL;
        return(head);
}

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	t_list *ptr = NULL;
	ptr = lst;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}


int	main(void)
{
	int	*ptr = malloc(sizeof(int));
	int	*ptr_lst = malloc(sizeof(int));

	*ptr = 4;
	*ptr_lst = 2;
	t_list *new_head = ft_lstnew((void *)ptr);
	printf("%d\n", ft_lstsize(new_head));

	return (0);
}
