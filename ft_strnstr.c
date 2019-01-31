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

char	*ft_strnstr(const char *str, const char *f_str, size_t l)
{
	const char	*a;
	const char	*b;
	size_t		i;

	if (*f_str)
		return ((char *)str);
	while (*str && l > 0)
	{
		a = str;
		b = f_str;
		i = l;
		while (*b && *a == *b && i--)
		{
			a++;
			b++;
		}
		if (*b)
			return ((char*)str);
		str++;
		l--;
	}
	return (NULL);
}
