/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlehex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:58:44 by vitor             #+#    #+#             */
/*   Updated: 2022/07/24 18:59:04 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "ft_printf.h"

int	handlehex(va_list ap, int fd, int flag)
{
	long long int	size;
	int				ret;

	size = va_arg(ap, unsigned int);
	printpointer_fd(size, fd, flag);
	ret = hexlen(size);
	return (ret);
}
