/*42 header*/

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst);
}

int	main(void)
{

	return (0);
}
