/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   htoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 20:22:53 by vitor             #+#    #+#             */
/*   Updated: 2022/07/19 20:35:52 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "ft_printf.h"

static char	countdigit(long long int n)
{
	int	nb;
	int	result;

	nb = n;
	result = 0;
	if (n < 0)
	{
		nb *= -1;
		result++;
	}
	while (nb >= 16)
	{
		nb = nb / 16;
		result++;
	}
	if (nb < 16)
		result++;
	return (result);
}

static void	makestr(long long int n, char *str, int position)
{
	str[position + 1] = 0;
	while (n >= 16)	
	{
		str[position--] = (n % 16) + 48;
		n /= 16;
	}
	str[position--] = n + 48;
}

char	*htoa(long long int n)
{	
	char	*str;
	int		dig;
	int		position;

	dig = countdigit(n);
	str = malloc (dig + 1);
	if (!str)
		return (NULL);
	position = dig - 1;
	makestr(n, str, position);
	return (str);
}