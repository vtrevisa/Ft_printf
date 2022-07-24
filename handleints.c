/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handleints.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:58:05 by vitor             #+#    #+#             */
/*   Updated: 2022/07/24 18:58:37 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "ft_printf.h"

int	handleints(va_list ap, int fd)
{
	int	size;
	int	ret;

	size = va_arg(ap, int);
	ft_putnbr_fd(size, fd);
	ret = countdigit(size);
	return (ret);
}
