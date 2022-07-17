/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 19:33:25 by vitor             #+#    #+#             */
/*   Updated: 2022/07/16 21:40:09 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "ft_printf.h"
#include <stdarg.h>

void	conversions(char c, va_list ap)
{
	//• %c Prints a single character.
	if (c == 'c')
	{	
		c = (char)va_arg(ap, int); //-> call the va_arg to read and gather the argument from va_list
		write (1, &c, 1);
	}
	//• %s Prints a string (as defined by the common C convention).
	//• %p The void * pointer argument has to be printed in hexadecimal format.
	//• %d Prints a decimal (base 10) number.
	//• %i Prints an integer in base 10.
	//• %u Prints an unsigned decimal (base 10) number.
	//• %x Prints a number in hexadecimal (base 16) lowercase format.
	//• %X Prints a number in hexadecimal (base 16) uppercase format.
	//• %% Prints a percent sign.
}

int	ft_printf(const char *str, ...) //-> U must declare a required argument(s) followed by "..."
{
	va_list ap;//-> declare my va_list called ap
	int position;
	
	va_start(ap, str);// -> initialize my va_list with the last required argument
	position = 0;
	while (str[position])
	{
		if (str[position] == '%')
			if (ft_strchr("cspdiuxX%", str[position + 1]))
				{
					position++;
					conversions(str[position], ap);
				}
			else 
				write (1, &str[position], 1);
		else 
			write(1, &str[position], 1);
		position++;
	}

	va_end(ap);
	return (0);
}
