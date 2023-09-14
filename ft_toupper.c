/*42 header*/

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

#include<stdio.h>
#include<ctype.h>

int	main(void)
{
	int	i = 97;
	int	j = 97;

	printf("%d\n", ft_toupper(146));
	printf("%d\n", toupper(146));
	return (0);
}
