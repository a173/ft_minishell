/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pwd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaryn <acaryn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 15:12:02 by jjerrod           #+#    #+#             */
/*   Updated: 2021/02/19 00:52:28 by acaryn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini.h"

char	*ft_pwd(t_envp *envp, char **arg)
{
	char *dir;

	(void)envp;
	(void)arg;
	if (!(dir = getcwd(NULL, 0)))
		return (ft_error(NULL, strerror(errno), 1) ? NULL : NULL);
	if (!(dir = ft_realloc(dir, "\n")))
		ft_error("malloc", ": memory allocation error.", 1);
	else
		g_exit = 0;
	return (dir);
}
