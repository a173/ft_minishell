/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaryn <acaryn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 20:04:19 by acaryn            #+#    #+#             */
/*   Updated: 2021/02/01 16:55:48 by acaryn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int i;
	int n;

	i = -1;
	if (!s || !fd)
		return ;
	n = ft_strlen(s);
	while (++i < n)
		ft_putchar_fd(s[i], fd);
}
