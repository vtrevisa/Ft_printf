/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 19:29:44 by vitor             #+#    #+#             */
/*   Updated: 2022/08/26 17:05:17 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
#include "./libft/libft.h"
# include <unistd.h>
# include <stdarg.h>

/*====FILES====*/
int		ft_printf(const char *str, ...);
int		handlechar(va_list ap, int fd);
int		handlestr(va_list ap, int fd);
int		handlepointer(va_list ap, int fd, int flag);
int		handleints(va_list ap, int fd);
int		handleunsigned(va_list ap, int fd);
int		handlehex(va_list ap, int fd, int flag);
void	printpointer_fd(unsigned long int lli, int fd, int flag);

/*====UTILS====*/
int		countdigit(int n);
int		countudigit(unsigned int n);
void	ft_putunbr_fd(unsigned int n, int fd);

/*====PRINTPOINTER_FD====*/
int		hexlen(unsigned long int lli);

#endif