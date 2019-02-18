/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okogut <okogut@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 20:11:56 by okogut            #+#    #+#             */
/*   Updated: 2019/01/30 20:11:57 by okogut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*n_l;
	t_list	*l;

	if (!lst)
		return (NULL);
	l = f(lst);
	n_l = l;
	while (lst->next)
	{
		lst = lst->next;
		if (!(l->next = f(lst)))
		{
			free(l->next);
			return (NULL);
		}
		l = l->next;
	}
	return (n_l);
}
