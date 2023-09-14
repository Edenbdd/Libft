/*42 header*/

#include<libft.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char *dest_bis = (unsigned char *)dest;
	unsigned char *src_bis = (unsigned char *)src;

	i = 0;
	if (dest_bis == NULL && src_bis == NULL)
		return (NULL);
	while (i < n)
	{
		dest_bis[i] = src_bis[i];
		i++;
	}
	return (dest);
}

int	main(void)
{
	char	dest[100];

	printf("%p\n", ft_memcpy(dest, "coucou", 0));
	printf("%p\n", ft_memcpy(dest, "A", 100));	
	return (0);
}
