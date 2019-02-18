/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okogut <okogut@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 10:14:38 by okogut            #+#    #+#             */
/*   Updated: 2019/01/16 10:14:39 by okogut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t i;
	size_t j;
	size_t l;

	l = ft_strlen(needle);
	i = 0;
	j = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i])
	{
		while (haystack[i + j] == needle[j])
		{
			if (j == l - 1)
				return ((char *)haystack + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
