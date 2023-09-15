/*42 header*/

#include"libft.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_strjoin(const char *s1, const char *s2)
{
    char *str;
    int i;
    int j;

    str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
    if (!str)
        return (NULL);
    i = 0;
    while (s1[i])
    {
        str[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j])
    {
        str[i] = s2[j];
        j++;
        i++;
    }
    str[i] = 0;
    return (str);
}


int main(void)
{
    printf("%s\n", ft_strjoin("bonyyy    7 ", "matin"));
    return (0);
}
