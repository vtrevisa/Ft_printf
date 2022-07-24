/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlestr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 19:25:16 by vitor             #+#    #+#             */
/*   Updated: 2022/07/24 19:27:30 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "ft_printf.h"

int	handlestr(va_list ap, int fd)
{
	char	*str;
	int		ret;

	str = va_arg(ap, char *);
	if (!str)
		str = "(null)";
	ft_putstr_fd (str, fd);
	ret = ft_strlen(str);
	return (ret);
}
