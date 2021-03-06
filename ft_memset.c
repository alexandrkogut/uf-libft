/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okogut <okogut@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 09:29:02 by okogut            #+#    #+#             */
/*   Updated: 2018/10/31 09:29:04 by okogut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *p, int s, size_t n)
{
	char	*p_w;
	size_t	i;

	p_w = p;
	i = 0;
	while (i < n)
		*(p_w + i++) = s;
	return (p);
}
