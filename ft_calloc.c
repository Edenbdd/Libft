/*42 header*/

#include<stdio.h>
#include<stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	unsigned char	*ptr;
	
	i = 0;
	ptr = malloc(sizeof(size) * nmemb);
	if (!ptr)
		return (NULL);
	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

int	main(void)
{
	printf("%s\n", (char *)ft_calloc(5, 4));
	printf("%s\n", (char *)calloc(5, 4));
	return (0);
}
