/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlechar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 19:02:36 by vitor             #+#    #+#             */
/*   Updated: 2022/07/24 19:02:42 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "ft_printf.h"

int	handlechar(va_list ap, int fd)
{
	int	ret;

	ret = 1;
	ft_putchar_fd ((char)va_arg(ap, int), fd);
	return (ret);
}
