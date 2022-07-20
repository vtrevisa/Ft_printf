#include "./libft/libft.h"
#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char	r[] = "teste\n";
	void	*p;

	ft_printf("%p\n", p);
	printf("%lld\n%p\n", (long long int)p, p);
	return (0);
}
