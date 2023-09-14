/*42 header*/

#include<libft.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
    	size_t	len_src;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (len_dst >= dstsize)
		len_dst = dstsize;
	if (len_dst == dstsize)
		return (len_dst + len_src);
	if (src_len < (dstsize - dst_len))
		ft_memcpy(dst + dst_len, src, src_len + 1);
	else 
	{
		ft_memcpy(dst + dst_len, src, dstsize - dst_len - 1);
		dst[dstsize - 1] = '\0';
	}
	return (len_src + len_dst);
}
