/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okogut <okogut@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 09:30:52 by okogut            #+#    #+#             */
/*   Updated: 2018/10/31 09:32:12 by okogut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memalloc(size_t size)
{
	void *m;

	m = NULL;
	if (size > 0)
	{
		m = malloc(size);
		if (m == NULL)
			return (NULL);
		m = ft_memset(m, 0, size);
	}
	return (m);
}
