/*42 header*/


#include<stdlib.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen((char *)s) + 1;
	while (len > 0)
	{
		if (s[len] == c)
			return ((char *)s + len);
		len--;
	}
	return (NULL);
}

#include<string.h>
#include<stdio.h>

int	main(void)
{
	char	*s1 = "je m'appelle Enzo";

	printf("%s\n", ft_strrchr(s1, 128));
	printf("%s\n", strrchr(s1, 128));
	return (0);
}