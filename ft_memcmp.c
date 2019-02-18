/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okogut <okogut@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 10:22:29 by okogut            #+#    #+#             */
/*   Updated: 2018/10/31 10:22:31 by okogut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	s1 = (unsigned char *)arr1;
	s2 = (unsigned char *)arr2;
	i = 0;
	while (i < n && *(s1 + i) == *(s2 + i))
		i++;
	if (i == n)
		return (0);
	return (*(s1 + i) - *(s2 + i));
}
