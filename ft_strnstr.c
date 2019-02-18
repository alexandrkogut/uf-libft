/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okogut <okogut@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 10:57:19 by okogut            #+#    #+#             */
/*   Updated: 2019/01/16 10:57:20 by okogut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	l;

	if (*s2 == '\0')
		return ((char *)s1);
	l = ft_strlen(s2);
	while (*s1 != '\0' && len-- >= l)
	{
		if (*s1 == *s2 && ft_memcmp(s1, s2, l) == 0)
			return ((char*)s1);
		s1++;
	}
	return (NULL);
}
