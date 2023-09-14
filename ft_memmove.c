/*42 header*/

#include<libft.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;	
	unsigned char *dest_bis;
	unsigned char *src_bis;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	dest_bis = (unsigned char *)dest;
	src_bis = (unsigned char *)src;
	if (src > dest)
	{
		while (n > 0)
		{
			dest_bis[i] = src_bis[i];
			n--;
		}
	}
	if (src <=  dest) 
	{
		while (i < n)
		{
			dest_bis[i] = src_bis[i];
			i++;
		}
	}
	return (dest);
}

int	main(void)
{
	char	*src = "je suis Enzo";
	char	dest[] = "*****";
	char	dest1[] = "*****";
	int	n = 5;

	printf("%s\n", (char *)ft_memmove(dest, src, n));
	printf("%s\n", (char *)memmove(dest1, src, n));
	return (0);
}
