/*42 header*/

#include"libft.h"

int	ft_strlen(char const *s1)
{
	int	i;

	i = 0;
	while (s1[i])
		i++;
	return (i);
}

int	is_set(char c, char const *set)
{
	int	count;

	count = 0;
	while (set[count])
	{
		if (c == set[count])
			return (1);
		count++;
	}
	return (0);
}

char	*ft_strndup(char const *s1, int i, int len)
{
	char	*tmp;
	int	k;

	k = 0;
	tmp = ft_calloc((len - i + 1), sizeof(char));
	if (!tmp)
		return (NULL);
	while ((i + k) < (len - i - 1))
	{
		tmp[k] = s1[i + k];
		k++;
	}
	tmp[k] = '\0';
	return (tmp);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	len;
	char	*copy;

	i = 0;
	len = ft_strlen(s1);
	while (s1[i] && is_set(s1[i], set))
		i++;
	while (len > 0 && is_set(s1[len], set))
		len--;
	copy = ft_strndup(s1, i, len);
	return (copy);
}

int	main(int argc, char **argv)
{
	printf("%s\n", ft_strtrim("ababaaaMy name is Simonbbaaabba", "ab"));
	return (0);
}
