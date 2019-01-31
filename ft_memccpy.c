/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okogut <okogut@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 09:30:15 by okogut            #+#    #+#             */
/*   Updated: 2018/10/31 09:30:21 by okogut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*b1;
	unsigned char	*b2;
	size_t			i;

	b1 = (unsigned char *)dst;
	b2 = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		b1[i] = b2[i];
		if (b1[i] == (unsigned char)c)
			return (b1 + i + 1);
		i++;
	}
	return (NULL);
}
