/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaryn <acaryn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 16:13:57 by acaryn            #+#    #+#             */
/*   Updated: 2021/02/10 10:35:56 by acaryn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *temp;
	t_list *buf;

	buf = *lst;
	while (buf)
	{
		temp = buf->next;
		if (del)
			del(buf->content);
		free(buf);
		buf = temp;
	}
	*lst = NULL;
}
