/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaryn <acaryn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 18:43:36 by acaryn            #+#    #+#             */
/*   Updated: 2021/02/01 17:23:23 by acaryn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *line, int *nb)
{
	int		i;
	long	n;

	i = 0;
	n = 0;
	if (line[i] == '-')
		i++;
	while (line[i] && line[i] >= 48 && line[i] <= 57)
		n = 10 * n + (line[i++] - 48);
	if (i == 0 || (line[0] == '-' && i == 1))
		return (0);
	*nb = (line[0] == '-') ? -n : n;
	return (i);
}
