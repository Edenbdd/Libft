/*42 header*/

#include<libft.h>

int	ft_strlen(const char *src)
{
	int	i;
	while (src[i])
		i++;
	return (i);	
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	int	len;

	len = ft_strlen(src); 
	i = 0;
	while (dst[i] && src[i] && i < (dstsize - 1))
	{
		dst[i] = src [i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

int	main(void)
{
	char	dst[] = "*****";
	char	dst1[] = "*****";
	char	*src = "abcde";
	printf("%ld\n", ft_strlcpy(dst, src, 6));
	printf("%ld\n", strlcpy(dst1, src, 6));
	printf("%s\n", dst);
	printf("%s\n", dst1);
	return (0);
}
