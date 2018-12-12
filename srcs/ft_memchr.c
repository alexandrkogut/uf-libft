/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okogut <okogut@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 09:36:48 by okogut            #+#    #+#             */
/*   Updated: 2018/10/31 09:36:51 by okogut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	const char	*m;
	size_t		i;

	m = (const char *)arr;
	i = 0;
	while (i < n)
	{
		if (*(m + i) == (char)c)
			return ((void *)m + i);
		i++;
	}
	return (NULL);
}
