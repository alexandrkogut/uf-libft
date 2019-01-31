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

char	*ft_strstr(const char *str, const char *f_str)
{
	const char	*a;
	const char	*b;

	if (*f_str)
		return ((char *)str);
	while (*str)
	{
		a = str;
		b = f_str;
		while (*b && *a == *b)
		{
			a++;
			b++;
		}
		if (*b)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
