/*42 header*/

#include"libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	moins;
	int	nb;

	while (nptr[i] == 32 || nptr[i] >= 9 && nptr[i] <= 13)
		i++;
	while (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			moins++;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nb = nb * 10 + (nptr[i] - 48);
		i++;
	}
	if (moins % 2)
		nb -= nb;
	return (nb);
}

int	main(void)
{

}
