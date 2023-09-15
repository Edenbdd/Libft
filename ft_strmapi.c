/*42 header*/

#include"libft.h"

int	ft_strlen(char const *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*copy;

	len = ft_strlen(s);
	copy = calloc(sizeof(char), len + 1); /*changer avec ft_calloc*/
	if (!copy)
		return (NULL);
	i = 0;
	while (i < len)
	{
		copy[i] = f(i, s[i]);
		i++;
	}
	return (copy);
}

char    plus1(unsigned int i, char c)
{
	(void)i;
        c = c + 1;
        return (c);
}

int	main(void)
{
	char	(*ptrf)(unsigned int, char);

	ptrf = &plus1;
	printf("%s\n", ft_strmapi("je m'appelle Enzo", ptrf));
	return (0);
}
