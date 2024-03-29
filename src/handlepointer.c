/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlepointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 17:52:40 by vitor             #+#    #+#             */
/*   Updated: 2022/07/24 17:53:35 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "ft_printf.h"

int	handlepointer(va_list ap, int fd, int flag)
{
	unsigned long int	size;
	int					ret;

	size = va_arg(ap, unsigned long int);
	printpointer_fd(size, fd, flag);
	if (size != 0)
		ret = hexlen(size) + 2;
	else
		ret = 5;
	return (ret);
}
