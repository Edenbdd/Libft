/*42 header*/

#include<libft.h>

int	check_char(char *str, char c)
{
	int	i;
	
	i = 0;
	while(str[i])
	{
		if (str[i] == c)
			return(1);
		i++;
	}
	return(0);
}

int	count_words(char *str, char *charset)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while(str[i])
	{
		if (str[i] && !check_char(charset, str[i]))
		{	
			count++;
			while(str[i] && !check_char(charset, str[i]))
				i++;
		}
		else
			i++;
	}
	return(count);
}

int	count_char(char *str, char *charset, int index)
{
	int count;

	count = 0;
	while(str[index] && !check_char(charset, str[index]))
	{
		count++;
		index++;
	}
	return(count);
}

char	*ft_strndup(char *str, int index, int n)
{
	int i;
	char *tab;

	tab = malloc(sizeof (char) * (n + 1));
	i = 0;
	if (!tab)
		return(0);
	while(str[i] && i < n)
	{
		tab[i] = str[index + i];
		i++;
	}
	tab[i] = '\0';
	return(tab);
}

char	**ft_split(char *str, char *charset)
{
	int i;
	int j;
	char **splitter;

	splitter = malloc(sizeof(char *) * count_words(str, charset) + 1);
	if (!splitter)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		if(!check_char(charset, str[i]))
		{
			splitter[j] = ft_strndup(str, i, count_char(str, charset, i));
			while (str[i] && !check_char(charset, str[i]))
				i++;
			j++;
		}
		i++;
	}
	splitter[j] = 0;
	return(splitter);
}

int	main(int ac, char **argv)
{
	if(ac == 3)
	{
		char **strs;
		int i;
		
		i = 0;
		strs = ft_split(argv[1], argv[2]);
		while (strs[i])
		{
			printf("%s\n", strs[i]);
			i++;
		}
	}
	return(0);
}
