/*42 header*/

#include<libft.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

int	main(void)
{
	ft_putstr_fd("je m'appelle Enzo", 1);
	return (0);
}
