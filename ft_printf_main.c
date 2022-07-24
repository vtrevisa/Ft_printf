#include "./libft/libft.h"
#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	char	c = '0';
	char	*s = NULL;
	void	*p;
	int		di = -42;
	unsigned int u = 42;
	int		xX = 0x1a23A56;
	int ret;

	ft_printf("Teste char\n");
	ft_printf("*--------------------------------------------------------*\n");
	ret = ft_printf("Minha Printf: %c\n", c);
	ft_printf("Retorno:%d\n", ret);
	ret = printf("Printf origi: %c\n", c);
	printf("Retorno:%d\n", ret);
	ft_printf("*--------------------------------------------------------*\n");

	ft_printf("Teste string\n");
	ft_printf("*--------------------------------------------------------*\n");
	ret = ft_printf("Minha Printf: %s\n", s);
	ft_printf("Retorno:%d\n", ret);
	ret = printf("Printf origi: %s\n", s);
	printf("Retorno:%d\n", ret);
	ft_printf("*--------------------------------------------------------*\n");

	ft_printf("Teste poiter\n");
	ft_printf("*--------------------------------------------------------*\n");
	ret = ft_printf("Minha Printf: %p\n", 0);
	ft_printf("Retorno:%d\n", ret);
	ret = printf("Printf origi: %p\n", 0);
	printf("Retorno:%d\n", ret);
	ft_printf("*--------------------------------------------------------*\n");

	ft_printf("Teste int\n");
	ft_printf("*--------------------------------------------------------*\n");
	ret = ft_printf("Minha Printf: %d\n", INT_MAX);
	ft_printf("Retorno:%d\n", ret);
	ret = printf("Printf origi: %d\n", INT_MAX);
	printf("Retorno:%d\n", ret);
	ft_printf("*--------------------------------------------------------*\n");

	
	ft_printf("Teste unsigned\n");
	ft_printf("*--------------------------------------------------------*\n");
	ret = ft_printf("Minha Printf: %u\n", -1);
	ft_printf("Retorno:%d\n", ret);
	ret = printf("Printf origi: %u\n", -1);
	printf("Retorno:%d\n", ret);
	ft_printf("*--------------------------------------------------------*\n"); 

	ft_printf("Teste hexa\n");
	ft_printf("*--------------------------------------------------------*\n");
	ret = ft_printf("Minha Printf: %x\n", xX);
	ft_printf("Retorno:%d\n", ret);
	ret = printf("Printf origi: %x\n", xX);
	printf("Retorno:%d\n", ret);
	ft_printf("*--------------------------------------------------------*\n");

	ft_printf("Teste HEXA\n");
	ft_printf("*--------------------------------------------------------*\n");
	ret = ft_printf("Minha Printf: %X\n", xX);
	ft_printf("Retorno:%d\n", ret);
	ret = printf("Printf origi: %X\n", xX);
	printf("Retorno:%d\n", ret);
	ft_printf("*--------------------------------------------------------*\n");
	
	ft_printf("Teste percent\n");
	ft_printf("*--------------------------------------------------------*\n");
	ret = ft_printf("Minha Printf: %\n");
	ft_printf("Retorno:%d\n", ret);
	ret = printf("Printf origi: %\n");
	printf("Retorno:%d\n", ret);
	ft_printf("*--------------------------------------------------------*\n");
	return (0);
}
