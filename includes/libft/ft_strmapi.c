/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaryn <acaryn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 01:15:20 by acaryn            #+#    #+#             */
/*   Updated: 2021/02/01 17:01:04 by acaryn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	n;
	char			*buf;

	i = 0;
	if (!s)
		return (buf = malloc(sizeof(char)));
	n = ft_strlen(s) + 1;
	if ((buf = malloc(n * sizeof(char))) != NULL)
	{
		while (i < n)
		{
			buf[i] = f(i, s[i]);
			i++;
		}
		buf[i] = 0;
	}
	return (buf);
}
