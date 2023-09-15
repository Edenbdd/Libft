/*42 header*/

#include"libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)

	lst->next = &new;
}

int	main(void)
{
	int	*ptr = malloc(sizeof(int));
	int	*ptr_lst = malloc(sizeof(int));

	*ptr = 4;
	*ptr_lst = 2;
	t_list *new_head = ft_lstnew((void *)ptr);
	t_list *lst_head = ft_lstnew((void *) ptr_lst);
	printf("%d\n", *(int *)lst_head->content);
        printf("%p\n", lst_head->next);

	ft_lstadd_front(&lst_head, new_head);
	printf("%d\n", *(int *)lst_head->content);
        printf("%p\n", lst_head->next);
	return (0);
}
