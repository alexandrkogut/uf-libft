/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okogut <okogut@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 20:11:09 by okogut            #+#    #+#             */
/*   Updated: 2019/01/30 20:11:09 by okogut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*n_l;

	if (!(n_l = (t_list*)malloc(sizeof(*n_l))))
		return (NULL);
	if (!(n_l->content = malloc(content_size)))
	{
		free(n_l);
		return (NULL);
	}
	if (!content)
	{
		n_l->content = NULL;
		n_l->content_size = 0;
		n_l->next = NULL;
		return (n_l);
	}
	n_l->content_size = content_size;
	ft_memcpy(n_l->content, content, content_size);
	n_l->next = NULL;
	return (n_l);
}
