/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaryn <acaryn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 14:23:32 by acaryn            #+#    #+#             */
/*   Updated: 2021/02/01 16:56:46 by acaryn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*s;
	int		n;
	int		i;

	i = -1;
	n = ft_strlen(str) + 1;
	if ((s = malloc(n * sizeof(char))) != NULL)
	{
		while (++i < n)
			s[i] = str[i];
		s[i] = '\0';
	}
	return (s);
}
