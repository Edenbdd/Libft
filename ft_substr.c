/*42 header*/

#include<stdio.h>
#include<stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	j;

	start = (size_t)start;
	i = start;
	j = 0;
	sub = calloc((len - start + 1), sizeof(char)); /*changer avec ft_calloc*/
	if (!sub)
		return (NULL);
	while (s[j] && j <= len)
	{	
		sub[j] = s[i];
		i++;
		j++;
	}
	sub[i] = '\0';
	return (sub);
}

int	main(void)
{
	printf("%s\n", ft_substr("je*m*appelle*Enzo", 2, 8));
	return (0);
}