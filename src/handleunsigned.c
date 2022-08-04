/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handleunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:59:35 by vitor             #+#    #+#             */
/*   Updated: 2022/07/24 19:02:30 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "ft_printf.h"

int	handleunsigned(va_list ap, int fd)
{
	int	size;
	int	ret;

	size = va_arg(ap, unsigned int);
	ft_putunbr_fd(size, fd);
	ret = countudigit(size);
	return (ret);
}
