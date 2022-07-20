#include "./libft/libft.h"
#include "ft_printf.h"

static char	hexabase(int num)
{
	char	*base;

	base = "0123456789ABCDEF";
	return (base[num]);
}

static char	hexlen(long long int lli)
{
	int	nb;
	int	result;

	nb = lli;
	result = 0;
	while (nb >= 16)
	{
		nb = nb / 16;
		result++;
	}
	if (nb < 16)
		result++;
	return (result);
}

static void	makestr(long long int lli, char *str, int position)
{
	str[position + 1] = 0;
	while (lli >= 16)	
	{
		str[position--] = hexabase(lli % 16);
		lli /= 16;
	}
	str[position--] = hexabase(lli);
}

char	*htoa(long long int lli)
{	
	char	*str;
	int		dig;
	int		position;

	dig = hexlen(lli);
	str = malloc (dig + 1);
	if (!str)
		return (NULL);
	position = dig - 1;
	makestr(lli, str, position);
	return (str);
}

void printpointer_fd(long long int lli, int fd)
{
	ft_putstr_fd (htoa(lli), fd);
}