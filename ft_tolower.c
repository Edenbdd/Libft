/*42 header*/

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}

#include<stdio.h>
#include<ctype.h>

int	main(void)
{
	int	i = 97;
	int	j = 97;

	printf("%d\n", ft_tolower(146));
	printf("%d\n", tolower(146));
	return (0);
}
