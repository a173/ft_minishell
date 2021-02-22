/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaryn <acaryn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 19:57:49 by acaryn            #+#    #+#             */
/*   Updated: 2021/02/13 20:13:29 by acaryn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini.h"

int	ft_error(char *str, char *err, int n)
{
	write(2, SHELL, ft_strlen(SHELL));
	write(2, ": ", 2);
	if (str)
		write(2, str, ft_strlen(str));
	write(2, err, ft_strlen(err));
	write(2, "\n", 1);
	g_exit = n;
	return (0);
}
