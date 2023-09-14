/*42 header*/

#include<stdio.h>
#include<stdlib.h>

int	is_charset(char i, char c)
{
	if (i == c)
		return (1);
	return (0);
}

int	ft_len(char const *s, int i, char c)
{
	int	j;

	j = 0;
	while (s[i] && !is_charset(s[i], c))
	{	
		j++;
		i++;
	}
	return (j);
}

int	ft_countword(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] && !is_charset(s[i], c))
		{
			count++;
			while (s[i] && !is_charset(s[i], c))
				i++;
		}
		i++;
	}
	return (count);
}

char	*ft_strndup(char const *s, int i, int len)
{
	char	*str;
	int	j;

	j = 0;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (str[j] && j < len)
	{
		str[j] = s[i + j];
		j++;
	}
	str[j] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int	i;
	int	j;

	i = 0;
	j = 0;
	str = malloc(sizeof(char *) * ft_countword(s, c) + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		if (!is_charset(s[i], c))
		{
			str[j] = ft_strndup(s, i, ft_len(s, i, c));
			while (s[i] && !is_charset(s[i], c))
				i++;
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}

int	main(int argc, char **argv)
{
	(void)argc;
	int	i;
	char 	**str;

	str = ft_split(argv[1], 'g');
	i = 0;
	while (i < 30)
	{
		printf("%s\n", str[i]);
		i++;	
	}
	return (0);
}
