/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clear_split.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaryn <acaryn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 17:20:14 by acaryn            #+#    #+#             */
/*   Updated: 2021/02/17 12:59:47 by acaryn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_clear_split(char **split)
{
	int	a;

	a = -1;
	if (split == NULL)
		return (0);
	while (split[++a] != NULL)
		free(split[a]);
	free(split);
	return (NULL);
}
