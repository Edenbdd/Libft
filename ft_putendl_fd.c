/*42 header*/

#include"libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}

int	main(void)
{
	ft_putendl_fd("je m'appelle Enzo", 1);
	return (0);
}
