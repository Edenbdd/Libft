/*42 header*/

#include<libft.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*s2;

	s2 = s;
	while (n-- > 0)
	{
		*s2 = '\0';
		s2++;
	}
}


int	main(void)
{
	char	s1[] = "blabla";
	char	s2[] = "blabla";
	int	i = 420;
	int	j = 420;
	int	*ptr = &i;
	int	*ptr1 = &j;	
	ft_bzero(s1, 3*sizeof(char));
	bzero(s2, 3*sizeof(char));
	printf("%s\n", s1);
	printf("%s\n", s2);
	ft_bzero(ptr, 1*sizeof(int));
	bzero(ptr1, 1*sizeof(int));
	printf("%d\n", i);
	printf("%d\n", j);	
	return (0);
}
