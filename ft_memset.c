/*42 header*/

#include"libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*s2;
	s2 = s;

	if (s == NULL)
		return (NULL);
	while (*s2 && n-- > 0)
	{
		*s2 = (unsigned char) c;
		s2++;
	}
	return (s);
}


int	main(void)
{
	char	s1[] = "je m'appelle Enzo";
	char	s2[] = "je m'appelle Enzo";

	ft_memset(s1 + 4, '_', 2*sizeof(char));
	printf("%s\n", s1);
	memset(s2 + 4, '_', 2*sizeof(char));
	printf("%s\n", s2);
	return (0);
}
