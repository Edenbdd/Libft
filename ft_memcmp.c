/*42 header*/

#include<string.h>
#include<stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	unsigned char *s1_bis;
	unsigned char *s2_bis;

	s1_bis = (unsigned char *)s1;
	s2_bis = (unsigned char *)s2;
	i = 0;
	if (s1_bis[i] == '\0' && s2_bis[i] == '\0')
		return (0);
	while ((s1_bis[i] || s2_bis[i]) && s1_bis[i] == s2_bis[i]&& i < n)
		i++;
	return (s1_bis[i] - s2_bis[i]);
}

int	main(void)
{
	int	tab1[] = {1, 2, 3, 4};
	int	tab2[] = {1, 2, 6, 4};
	
	printf("%d\n", ft_memcmp(tab1, tab2, 4));
	printf("%d\n", memcmp(tab1, tab2, 4));
	return (0);
}

